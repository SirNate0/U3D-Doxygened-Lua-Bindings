#!/usr/bin/python3

# Generate XML: `doxygen Doxyfile`

import xmltodict
from lxml import etree,html
from pprint import pprint,pformat
import re
from collections import defaultdict,Counter
from collections.abc import Mapping, Sequence
from os import path
from glob import glob
import traceback
import os

def exc2tb(e):
    return '\n'.join(traceback.format_exception(None, e, e.__traceback__))
def yesno2bool(v):
    return {
        'yes' : True,
        'no' : False
    }.get(v.lower(),None)
    
#def on(func,file=None,binder=None,cls=None,var=None):
    #params = dict(file=file,binder=binder,cls=cls,var=var)
    #def f(file=None,binder=None,cls=None,var=None):
        #return func([file  and file == params['file'],
                    #binder and binder == params['binder'],
                    #cls and cls == params['cls'],
                    #var and var == params['var']])
    
    
#############################
##### MANUAL ADDITIONS ######
#############################

ALLOW_GLOBAL_ENUM_VARS = True
BIND_PROPERTIES_ALSO_AS_FUNCTIONS = True

#additional using statements for the bind functions (e.g. bindClass_Urho3D_Spriter_SpatialInfo)
using_binder_additions = {
    'bindClass_Urho3D_Spriter_SpatialInfo' : 'using SpatialInfo = Spriter::SpatialInfo;',
    'bindClass_Urho3D_Spriter_SpatialTimelineKey' : 'using TimelineKey = Spriter::SpatialTimelineKey',
    'bindClass_Urho3D_Spriter_SpatialInfo' : 'using SpatialInfo = Spriter::SpatialInfo;',
    'bindClass_Urho3D_Spriter_SpatialInfo' : 'using SpatialInfo = Spriter::SpatialInfo;',
    'bindClass_Urho3D_Renderer' : 'using ShadowMapFilter = Renderer::ShadowMapFilter;',
    'bindClass_Urho3D_IKSolver': 'using Algorithm = IKSolver::Algorithm;',
    'bindClass_Urho3D_Color' : 'using ChannelMask = Color::ChannelMask;',
}

using_file_additions = {
    'SpriterData2D.cpp' : 'using namespace Urho3D::Spriter;',
}

include_file_additions = {
    'NavBuildData.cpp' : '''#include <Urho3D/ThirdParty/Recast/Recast.h>''',
    'Constraint.cpp' : '''#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>''',
    'Network.cpp' : '''#include <SLikeNet/types.h>''',
    'Connection.cpp' : '''#include <SLikeNet/types.h>''',
    'RigidBody.cpp' : '''#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <BulletCollision/CollisionShapes/btCompoundShape.h>''',
    'CollisionShape.cpp' : '''#include <BulletCollision/CollisionShapes/btCollisionShape.h>''',
    'XMLFile.cpp' : '''#include <PugiXml/pugixml.hpp>''',
    'XMLElement.cpp' : '''#include <PugiXml/pugixml.hpp>''',
    #Skip Urho3D::XMLElement::GetNode as pugi::xml_node_struct is defined in a .cpp file.
    'PhysicsWorld.cpp' : '''#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>''',
    'Graphics.cpp' : '#include <SDL/SDL_video.h>\n#include <Urho3D/Graphics/GraphicsImpl.h>',
}

# additions for stuff like platform-dependent quirks, or anything else
extra_file_additions = {
    'Connection.cpp' : '''#ifdef SendMessage
#undef SendMessage
#endif''',
}

forbid_files = [
    'Urho2D/SpriterData2D.h',
    'Urho2D/SpriterInstance2D.h',
    'Database/Database.h'
]

forbid_classes = [
    'Urho3D::TriangleMeshData',
    'Urho3D::GImpactMeshData',
    # Better handling of CollisionShape.cpp's ConvexData SharedArrayPtr data vars rather than just skipping them.
    'Urho3D::ConvexData',
    'fmt::formatter< Urho3D::String, Char >',
]

forbid_binding_members = [
    'Urho3D::CursorShapeInfo::osCursor_',
    'Urho3D::JoystickState::joystick_',
    'Urho3D::JoystickState::controller_',
    
    'Urho3D::PListValue::int_',
    'Urho3D::PListValue::bool_',
    'Urho3D::PListValue::float_',
    'Urho3D::PListValue::string_',
    'Urho3D::PListValue::valueMap_',
    'Urho3D::PListValue::valueVector_',

    'Urho3D::UI::RenderToTextureData',
    'Urho3D::TmxFile2D::GetLayer', # Maybe wrap the const raw*
    'Urho3D::TileMapLayer2D::GetTmxLayer', # Maybe wrap the const raw*
    'Urho3D::Graphics::GetWindow', # Maybe a coerce_type to an intptr_t?
    'Urho3D::Image::GetSDLSurface',
    
    'Urho3D::JSONValue::End',
    'Urho3D::JSONValue::Begin',
    
    'Urho3D::XMLElement::GetNode',
    'Urho3D::UISelectable::URHO3D_OBJECT', # Ignore/fix this one for all classes?
    
    'Urho3D::UIElement::UIElement', # Fix this one
    
    'Urho3D::ShaderProgram_OGL::GetConstantBuffers'
]

force_abstract_classes = [
    'Urho3D::AbstractFile',
]

force_function_name = {
    'ToString': '__tostring',
}


#############################
# End MANUAL ADDITIONS ######
#############################

SEPARATOR = '<@@@>'
base_dir = './generated-xml/'

INCLUDES_MAP = {}
CLASS_MAP = {}
CLASS_INCLUDES = defaultdict(set)
for i in sorted(glob(base_dir + '*_8h.xml')):
    with open(i,'rb') as f:
        try:
            xml = etree.parse(f)
            full = xml.find("/compounddef/location").get('file')
            INCLUDES_MAP[i[len(base_dir):-4]] = re.sub('.*/Source/Urho3D/','Urho3D/',full)
            #print(list(map(lambda e : (e.text,e.get('refid')),xml.getroot().findall(f'.//includes[@refid]'))))
        except etree.XMLSyntaxError as e:
            print(f'Could not parse include {fn}:\n{exc2tb(e)}')
            
            
for fn in sorted(glob(base_dir + '*.xml')):
    with open(fn,'rb') as f:
        try:
            xml = etree.parse(f)
            #print(list(map(lambda e : (e.text,e.get('refid')),xml.getroot().findall(f'.//includes[@refid]'))))
            CLASS_INCLUDES[fn] |= set(map(lambda e : INCLUDES_MAP[e.get('refid')],xml.getroot().findall(f'.//includes[@refid]')))
            
        except etree.XMLSyntaxError as e:
            print(f'Could not parse xml looking for includes {fn}:\n{exc2tb(e)}')
           
#print('\n'.join(CLASS_INCLUDES.keys()))
#exit()
#pprint(INCLUDES_MAP)
      
fn = 'classUrho3D_1_1File.xml'
fn = 'classUrho3D_1_1Node.xml'
#with open(f'../generated/xml/{fn}','rb') as f:
    #data = xmltodict.parse(f,cdata_separator=SEPARATOR)

with open(path.join(base_dir,fn),'r') as f:
    # The replacement is a cheat to get the SEPARATOR everywhere. Without it we were getting as an arg type '#text': '&', with it we get '#text': '<@@@> &', which is better.
    # The .strip() is because it needs to start with < at line 1 col 1 apparently.
    data = xmltodict.parse(f.read().replace('<',' <').strip(),cdata_separator=SEPARATOR)

    
#with open(f'../generated/xml/{fn}','r') as f:
    #data = f.read()
    #import re
    #print(re.findall(r'<ref refid="\w+" kindref="compound">(.*?)</ref>',data))
    #data = re.sub(r'<ref refid="\w+" kindref="compound">(.*?)</ref>',r'\1',data)
    #data = xmltodict.parse(data,cdata_separator='!@#$')
    
#print(xml.getroot().findall('.//basecompoundref'))
#exit()
    
#pprint(data)
with open('test.json','w') as f:
    pprint(data,stream=f)

def get(data,*args):
    d = data
    for a in args:
        d = d[a]
    return d

def gets(data,path,separator='/'):
    return get(data,*path.split(separator))

def ls(data,*args):
    return gets(data,*args).keys()

def getall(data,*args,test=None):
    d = data
    if len(args) == 0:
        return d
    a = args[0]
    if isinstance(a,str) and a.endswith('*'):
        if isinstance(test,Sequence):
            tst = test[0]
            test = test[1:] if len(test) > 1 else None
        else:
            tst = test
        a = a[:-1]
        if not a in d:
            return []
        if isinstance(d[a],list):
            o = [getall(v,*args[1:],test=test) for v in d[a] if tst is None or tst(v)]
        else:
            o = [getall(v,*args[1:],test=test) for v in [d[a]] if tst is None or tst(v)]
        return o
    else:
        return getall(data[a],*args[1:],test=test)
            

def getsall(data,path,separator='/',test=None):
    return getall(data,*path.split(separator),test=test)

def findall_args(data,arg,out=None):
    if out is None:
        out = []
    if isinstance(data,Mapping):
        for k in data:
            if k == arg:
                out.append(data[k])
            else:
                findall_args(data[k],arg,out)
    elif isinstance(data,list):
        for v in data:
            findall_args(v,arg,out)
    return out
    

pprint(get(data,'doxygen','compounddef','@id'))

def bind_class(**kwargs):
    return '''
// Generated File
// Based on: {filename}

{includes}

void bindClass_{scoped_underscore}(sol::state_view& lua)
{{
    
using namespace Urho3D;
{usings}
auto type = lua.new_usertype<{scoped}>( "{name}"
// Base Classes
    , sol::base_classes, sol::bases<{bases}>()

);

// Constructors
{constructors}

// Members
{members}

}}

'''.format(**kwargs)

def bind_member(name,binding,comment=False):
    if comment:
        return f'''
# if 0 // SKIPPED
    type["{name}"] = {binding};
# endif'''
        
    return f'''
    type["{name}"] = {binding};'''

bind_method_ptr_args = '''
    type["{name}"] = []({Self}& self, {args}) {
        return SharedPtr(self.{name}({useargs}));
    };'''
    
bind_method_ptr_void = '''
    type["{name}"] = []({Self}& self) {
        return SharedPtr(self.{name}());
    };'''

bind_template_cast = '''
    type["{name}"] = []({Self}& self, String type, sol::this_state s)->sol::object{
        auto o = SharedPtr<Object>(self.{name}(type));
        sol::state_view lua(s);
        if (!o || !casters.Contains(type))
            return sol::nil;
        return casters[type](o,lua);
    };'''
    
def wrap_property(getset):
    return f'''sol::property({getset})'''

# Note the argdefs needs a leading comma, and args does not
wrap_refcounted = '''[]({Self}& self{argdefs}){ return SharedPtr(self.{name}({args})); }'''
    

    
def overload_methods(name,joined,comment):
    return bind_member(name=name,binding=f'''sol::overload(
        {joined} )''',comment=comment)
        
def bind_constructor(binding):
    return f'''
    type[sol::call_constructor] = {binding};'''
    
    
class auto_repr(object):
    def __repr__(self):
        items = []
        for k, v in self.__dict__.items():
            v = "%s=%r" % (k, v)
            if len(v) < 40:
                items.append(v)
            else:
                items.append(f'{k}=...')
        return "<%s: %s >" % (self.__class__.__name__, ', '.join(items))
   
   
def flatten(data):
    if not data: # None, '', [], {}
        return ''
    if isinstance(data,str):
        return data
    
    try:
        txts = []
        for i in data:
            if i.startswith('@') or i == '#text':
                continue
            if isinstance(data[i],list):
                for d in data[i]:
                    txts.append(flatten(d))
            else:
                txts.append(flatten(data[i]))
            
        if '#text' in data:
            base = data['#text']
            if base.count(SEPARATOR) < len(txts):
                base = txts[0] + base
                txts = txts[1:]
            for t in txts:
                base = base.replace(SEPARATOR,t,1)
            return base
        else:
            return ''.join(txts)
    except Exception as e:
        pprint(data)
        print(e)
        print(repr(i),type(i))
        raise e
    
    
class Type(object):
    primitives = {
}

    @staticmethod
    def reset_refs():
        Type.refs = []
        Type.refsmap = defaultdict(set)
    def __init__(self,data,val=None):
        self.val = flatten(data) if val is None else val
        self.refid = findall_args(data,'@refid')
        self.data = data
        #if isinstance(data,dict):
            #data['#text'].replace(
        if self.refid:
            Type.refs += self.refid# + [self.val,'------'] <- for pprint with divisions
            for i,id in enumerate(self.refid):
                Type.refsmap[id].add((self.val,i))
        #else:
            #print(f'No type info in:\n{pformat(data)}')
        v=self.val
        match = []
        for test in ['volatile ','constexpr ','const ']:
            if v.startswith(test):
                match.append(True)
                v = v[len(test):].strip()
            else:
                match.append(False)
        self.volatile,self.constexpr,self.const = match
        match = []
        for test in ['&&','&','*','*','*','*',]:
            if v.endswith(test):
                match.append(True)
                v = v[:-len(test)].strip()
            else:
                match.append(False)
        self.rref,self.ref = match[:2]
        self.ptr = sum(filter(int,match[2:]))
        self.plain = v
    def __repr__(self):
        return self.val
    def __hash__(self):
        return hash(self.val)
    def base_map(self,type_name):
        return [(type_name == CLASS_MAP[r].scoped or type_name in CLASS_MAP[r].bases) if r in CLASS_MAP else None for r in self.refid]
    def ref_counted_idx(self,type_name='Urho3D::RefCounted'):
        if any(r in CLASS_MAP for r in self.refid):
            try:
                return self.base_map(type_name=type_name).index(True)
            except ValueError:
                return None
        return None
    def is_ref_counted(self):
        return self.ref_counted_idx() is not None
    def is_unshared_ref_counted(self,type_name='Urho3D::RefCounted'):
        i = self.ref_counted_idx(type_name=type_name)
        if i is None:
            return False
        if i == 0:
            return True
        return [('Urho3D::SharedPtr' == CLASS_MAP[r].scoped) if r in CLASS_MAP else None for r in self.refid][i-1] == False
    def is_primitive(self):
        return self.plain in Type.primitives
    
    def needs_wrap(self):
        return (self.is_primitive() or self.plain in ('String','string','Urho3D::String','std::string')) and self.ref and not (self.const or self.constexpr)
    
for ts,t_as in [
        [["bool"], 'bool'],
        [["char", "signed char", "i8"], 'i8'],
        [["unsigned char", "u8"], 'u8'],
        [["short", "i16"], 'i16'],
        [["unsigned short", "u16"], 'u16'],
        [["int", "i32"], 'i32'],
        [["unsigned", "unsigned int", "u32"], 'u32'],
        [["long long", "i64"], 'i64'],
        [["unsigned long long", "u64"], 'u64'],
        [["float"], 'float'],
        [["double"], 'double'],
        [["long"], 'long'],
        [["unsigned long"], 'unsigned long'],
        [["size_t"], 'size_t'],
        [["c32"], 'c32'],]:
    for t in ts:
        Type.primitives[t] = t_as
    

class Argument(auto_repr):
    def __init__(self,data):
        try:
            self.type = Type(data['type'])
            self.name = data.get('declname','')
            self.default = data.get('defval',None)
        except Exception as e:
            raise Exception(f'''Argument failed: {pformat(data)} {exc2tb(e)}''')
    
    def __repr__(self):
        return f'''{self.type} {self.name}'''
    
    
rets = defaultdict(list)
class Function(auto_repr):
    def __init__(self,data,Class=None):
        try:
            self.Class = Class
            self.name = data['name']
            self.argstring = data.get('argsstring','!?!')
            #self.ret = Type(data.get('type',None) or '')
            defn = re.sub(' *, *',',',re.sub('< +','<',re.sub(' +>','>',data['definition']))).split(' ')
            # Constructor has no type, hence the get for 'type' rather than ['type']
            if self.is_cast_operator():
                self.ret = Type(data.get('type',None) or {},val=re.sub(r'operator\s+(\w.*)',r'\1',self.name))
                self.scoped = ' '.join(defn)
            else:
                self.ret = Type(data.get('type',None) or {},val=re.sub(r'(virtual |constexpr )*(.*)',r'\2',' '.join(defn[:-1])))
                self.scoped = defn[-1]
                
            #print(self.name,data.get('type',None),'val=',' '.join(defn),re.sub(r'operator\s+(\w.*)',r'\1',self.name))
            #print(self.argstring)
            #print(self.is_const(),yesno2bool(data.get('@const')),data.get('@const'))
            #Fails: assert(self.is_const() == yesno2bool(data.get('@const')))
            global rets
            self.comment = flatten(data['briefdescription']) + flatten(data['detaileddescription'])
            rets[self.ret.val].append(self.name)
            
            self.args = list(map(Argument,getsall(data,'param*')))
            self.data = data
            self.templated = 'templateparamlist' in data
            self.template = flatten(data.get('templateparamlist',''))
            self.force_wrap = False
            self.filename = gets(data,'location/@file')
        except Exception as e:
            raise Exception(f'''Function failed: {pformat(data)} {exc2tb(e)}''')
    
    @property
    def bind_as(self):
        if self.name in force_function_name:
            return force_function_name[self.name]
        elif 'BIND_AS_ALIAS_' in self.comment:
            m = re.match(r'.*?BIND_AS_ALIAS_([\w_]+).*?', self.comment)
            #if len(m) != 1: # for re.findall
                #raise Exception(f"Could not find a single alias for function {self.scoped} in {self.comment}")
            match = m.group(1)
            if match.startswith('set_') or match.startswith('get_'):
                return self.name # Until we can separate the angelscript and luascript function names
            else:
                return match
        elif self.is_operator():
            return self.op_name()
        return self.name
    
    def __repr__(self):
        binding = bind_member(name=self.bind_as,binding=self.get_specific(),
                                                       comment=self.scoped in forbid_binding_members)
        r = f'''
    /*{self.comment}*//*{self.argstring}*/{binding}'''
        if self.invalid:
            return f'''
#if 0 // INVALID: {self.invalid}{r}
#endif
        '''
        return r
        
    
    def is_operator(self):
        """ returns true if this is an operator """
        return bool(re.match(r'operator\W.*',self.name))
    
    def is_cast_operator(self):
        """ returns true if this is a casting operator, like operator bool(). """
        return bool(re.match(r'operator\s+\w.*',self.name))
    
    def is_const(self):
        return bool(re.match(r'\(.*\)( noexcept)? const\b.*',self.argstring))
    
    @property
    def invalid(self):
        return ''.join([f'NeedsWrap({a.type.val})' for a in self.args if a.type.needs_wrap()] + 
                        [self.name if self.name in {'URHO3D_EVENT','URHO3D_PARAM','URHO3D_FLAGSET','if'} else '',
                         'deleted!' if '=delete' in self.argstring.replace(' ','') else '',
                         'NoBind!' if 'NO_BIND' in self.comment else '',
                         f'Skip {self.name}' if self.bind_as.startswith('operator""') else '',
                         f'Not A Function: {self.get_specific()}' if self.argstring.startswith('("') else ''
                         ])
    
    def op_name(self):
        try:
            """
            return 'sol::meta_function::' + {
                'operator-' : ('unary_minus' if len(self.args) == 0 else 'subtraction'),
                'operator+' : 'addition' ,
                'operator*' : 'multiplication',
                'operator/' : 'division',
                'operator%' : 'modulus',
                
                'operator==' : 'equal_to',
                'operator<' : 'less_than',
                'operator<=' : 'less_than_or_equal_to',
                
                #'operator' : 'floor_division',
                'operator<<' : 'bitwise_left_shift',
                'operator>>' : 'bitwise_right_shift',
                'operator~' : 'bitwise_not',
                'operator&' : 'bitwise_and',
                'operator|' : 'bitwise_or',
                'operator^' : 'bitwise_xor',
                
            }[self.name.replace(' ','')]
            """
            
            return {
                'operator-' : ('__unm' if len(self.args) == 0 else '__sub'),
                'operator+' : '__add' ,
                'operator*' : '__mul',
                'operator/' : '__div',
                'operator%' : '__mod',
                
                'operator==' : '__eq',
                'operator<' : '__lt',
                'operator<=' : '__le',
                
                #'operator' : 'floor_division',
                'operator<<' : '__shl',
                'operator>>' : '__shr',
                'operator~' : '__bnot',
                'operator&' : '__band',
                'operator|' : '__bor',
                'operator^' : '__bxor',
                
                'operator[]' : ('op__index' if self.is_const() else 'op__newindex'), # https://www.oreilly.com/library/view/lua-quick-start/9781789343229/4a3ed0b4-e14d-416d-8ce4-38ca366c6b0a.xhtml
                
            }[self.name.replace(' ','')]
        except KeyError:
            reps = {
                '==':'eq',
                '!=':'neq',
                '>':'gt',
                '>=':'ge',
                '=':'assign',
                '+':'add',
                '-':'sub',
                '*':'mul',
                '/':'div',
                '%':'mod',
                }
            n = self.name
            for r,v in reps.items():
                n = n.replace(r,'_'+v)
            return n
            
    
    def get_arg_types(self):
        return ', '.join([str(a.type) for a in self.args])
    
    def get_named_args(self):
        return ', '.join([f'{a.type} {a.name}' for a in self.args])
    
    def get_args(self,defaults = False,parens=True,names=False):
        if defaults or names:
            raise Exception("Unsupported")
        else:
            args = self.get_arg_types()
            if parens:
                args = f'({args})'
                return re.sub(r'\(.*\)',args,self.argstring).replace('=default','').replace(' override','').replace('=0','')
            return args
    def get_specific(self):
        if self.ret.is_unshared_ref_counted('Urho3D::Object'):
            argdefs = self.argstring[1:self.argstring.rfind(')')]
            if self.Class:
                if argdefs:
                    argdefs = ', ' + argdefs
            return '''[]({Self}& self{argdefs}, sol::this_state sol_state)->sol::object{{
            auto o = SharedPtr<Urho3D::Object>(self.{name}({args}));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }}'''.format(Self=self.Class.scoped,name=self.name,argdefs = argdefs,args=', '.join([a.name for a in self.args]))
        if self.ret.is_unshared_ref_counted():
            argdefs = self.argstring[1:self.argstring.rfind(')')]
            if self.Class:
                if argdefs:
                    argdefs = ', ' + argdefs
                if self.ret.ref_counted_idx() == 0:
                    return '''[]({Self}& self{argdefs}){{ return SharedPtr(self.{name}({args})); }}'''.format(
                        Self=self.Class.scoped,name=self.name,argdefs = argdefs,args=', '.join([a.name for a in self.args]))
                else:
                    return '''[]({Self}& self{argdefs}){{ return /*FIXME: {rt}*/WrapSharedPointer(self.{name}({args})); }}'''.format(
                        Self=self.Class.scoped,name=self.name,argdefs = argdefs,args=', '.join([a.name for a in self.args]),rt=str(self.ret) + str(self.ret.base_map('Urho3D::RefCounted')))
            elif self.ret.ref_counted_idx() == 0:
                return '''[]({argdefs}){{ return SharedPtr({name}({args})); }}'''.format(
                    name=self.name,argdefs = argdefs,args=', '.join([a.name for a in self.args]))
            else:
                return '''[]({argdefs}){{ return /*FIXME: {rt}*/ WrapSharedPointer({name}({args})); }}'''.format(
                    name=self.name,argdefs = argdefs,args=', '.join([a.name for a in self.args]),rt=str(self.ret) + str(self.ret.base_map('Urho3D::RefCounted')))
        elif self.ret.val.startswith('AttributeHandle'):
            argdefs = ', ' + self.argstring[1:self.argstring.rfind(')')]
            return '''[]({Self}& self{argdefs}){{ /*ATTEMPT*/self.{name}({args}); return; }}'''.format(
                        Self=self.Class.scoped,name=self.name,argdefs = argdefs,args=', '.join([a.name for a in self.args]))
        elif self.force_wrap:
            argdefs = self.argstring[1:self.argstring.rfind(')')]
            if argdefs:
                argdefs = ', ' + argdefs
            return '''[]({Self}& self{argdefs}){{ {ret}self.{name}({args}); }}'''.format(
                        Self=self.Class.scoped,name=self.name,argdefs = argdefs,
                        args=', '.join([a.name for a in self.args]),
                        ret = 'return ' if self.ret.val != 'void' else '')
        elif self.Class:
            return f'''static_cast<{self.ret} ({self.scoped[:-len(self.name)]}*){self.get_args()}>(&{self.scoped}) '''.replace('virtual ','')
        else:
            return f'''static_cast<{self.ret} (*){self.get_args()}>(&{self.scoped}) '''.replace('virtual ','')
        '''
    {self.args}
    {pformat(self.data)}
*/''' #pformat(self.data)


def expand_function_defaults(flist):
    out = []
    for f in flist:
        out.append(f)
        from copy import deepcopy
        defaults = sum(1 if a.default else 0 for a in f.args)
        for i in range(defaults):
            fc = deepcopy(f)
            fc.args = fc.args[:-i-1]
            fc.force_wrap = True
            argstr = f'({fc.get_named_args()})'
            fc.argstring = re.sub(r'\(.*\)',argstr,fc.argstring)
            out.append(fc)
    return out
            

class OverloadList(list):
    def __str__(self):
        return repr(self)
    def __repr__(self):
        if len(self) == 1:
            return repr(self[0])
        return overload_methods(name=self[0].bind_as,joined=',\n        '.join(map(lambda f : f.get_specific(),self)),comment=self[0].scoped in forbid_binding_members)
    
class Property(object):
    @staticmethod
    def fix_name(name):
        if name[0].islower():
            return name
        elif name.isupper(): # Full acronym
            return name.lower()
        
        for i in range(len(name)):
            if not name[:i+1].isupper():
                break
        # i now points to the first lower case character
        assert(i>0)
        if i == 1:
            # If only first is capitalized, we just make the word lowercase
            return name[0].lower() + name[1:]
        else:
            # If multiple were, we assume that it was an acronym, and make multiple
            return name[:i-1].lower() + name[i-1:]
        
    def __init__(self,name,get,set):
        self.name = Property.fix_name(name)#name[0].lower() + name[1:]
        self.get = get
        self.set = set
        
    def getset(self,join=', '):
        if self.get and self.set:
            return f'{self.get.get_specific()}{join}{self.set.get_specific()}'
        f = self.get or self.set
        return f.get_specific()
        
    def __repr__(self):
        return bind_member(name=self.name,binding=wrap_property(getset=self.getset(join='\n        , ')))
        
class Variable(object):
    def __init__(self,data,Class):
        self.Class = Class
        self.data = data
        self.name = flatten(data['name'])
        self.type = Type(data['type'])
        self.comment = flatten(data['briefdescription']) + flatten(data['detaileddescription'])
        self.definition = flatten(data['definition'])
        self.argstring = flatten(data.get('argsstring',''))
        self.scoped = self.definition[:(-len(self.argstring) or None)].rpartition(' ')[-1]
        if self.scoped.startswith('Urho3D::DecalVertex::blendWeights_'):
            pprint(data)
            print(self.argstring)
            print(self)
        
    @property
    def invalid(self):
        return '@' in str(self.type) or '@' in self.name or 'NO_BIND' in self.comment
        
    def __repr__(self):
        grp = re.match('\[(.*)\]',self.argstring)
        if grp:
            r = ''
            try:
                count = int(grp.group(1))
                for i in range(count):
                    binding = wrap_property(f'[]({self.Class.scoped}& s) {{ return s.{self.name}[{i}]; }}, []({self.Class.scoped}& s, {self.type.val} v){{ s.{self.name}[{i}] = v; }}')
                    r += bind_member(name=self.name+str(i),binding=binding,
                            comment=self.scoped in forbid_binding_members);
                return r
            except Exception as e:
                return r + bind_member(name=self.name,binding='&'+self.scoped,
                        comment=True) + f'\n//{e}'
        
        elif self.type.ref:
            wrap = f'[]({self.Class.scoped}& s) {{ return s.{self.name}; }}'
        
            if not (self.type.const or self.type.constexpr):
                wrap += f', []({self.Class.scoped}& s, const {self.type.val} v){{ s.{self.name} = v; }}'
            binding = wrap_property(wrap)
        else:
            binding = '&'+self.scoped
        r = bind_member(name=self.name,binding=binding,
                        comment=self.scoped in forbid_binding_members);
        return r.replace('\n','\n//') if self.invalid else r
        
        
class Class(auto_repr):
    def __init__(self,data):
        Type.reset_refs()
        
        self.scoped = gets(data,'doxygen/compounddef/compoundname')
        self.name = self.scoped.split('::')[-1]
        
        self.filename = gets(data,'doxygen/compounddef/location/@file')
        self.local_filename = fn = re.sub('.*/Source/Urho3D/','Urho3D/',self.filename)
        
        self.refid = gets(data,'doxygen/compounddef/@id')
        CLASS_MAP[self.refid] = self
        
        local = gets(data,'doxygen/compounddef')
        self.data = local
        self.comment = flatten(local.get('briefdescription','')) + flatten(local.get('detaileddescription',''))
        self.abstract = yesno2bool(local.get('@abstract','')) or self.scoped in force_abstract_classes
        
        # Base classes
        #self.direct_bases = getsall(data,'doxygen/compounddef/basecompoundref*/#text'
                             #,test=lambda d : d['@prot'] == 'public')
        #self.direct_baseIDs = getsall(data,'doxygen/compounddef/basecompoundref*/@refid'
                             #,test=lambda d : d['@prot'] == 'public')
        try:
            depgraph = getsall(data,'doxygen/compounddef/inheritancegraph/node*')
            depgraphmap = {n['@id']:n for n in depgraph}
            bases = []
            def add_base_of(n):
                for c in getsall(n,'childnode*'):
                    if c['@relation'] == 'public-inheritance':
                        target = depgraphmap[c['@refid']]
                        bases.append(flatten(target['label']))
                        add_base_of(target)
            for i,n in enumerate(depgraph):
                if flatten(n['label']) == self.scoped:
                    add_base_of(n)
            
            self.bases = bases
        except KeyError as e:
            if str(e) != "'inheritancegraph'":
                print('Failed to parse base graph for',self.scoped)
                print(exc2tb(e))
            self.bases = []
        except Exception as e:
            print('Failed to parse base graph for',self.scoped)
            print(exc2tb(e))
            self.bases = []
                        
        
        self.template = local.get('templateparamlist','')
        
        # Functions
        fns = getsall(data,'doxygen/compounddef/sectiondef*/memberdef*'
                             ,test=[lambda d : d['@kind'] in ['public-func']])
        if fns:
            #self.member_funcs = list(filter(lambda f: not f.invalid,[Function(d,self) for d in fns[0]]))
            #self.member_funcs = [Function(d,self) for d in fns[0]]
            self.member_funcs = expand_function_defaults([Function(d,self) for d in fns[0]])
        else:
            self.member_funcs = []
            print(f'No functions for class {self.name}')
        counts = Counter([f.bind_as for f in self.member_funcs])
        self.overloaded_member_funcs = defaultdict(OverloadList)
        self.singular_member_funcs = []
        self.constructors = []
        self.destructor = None
        self.template_member_functions = []
        for f in self.member_funcs:
            if f.name == self.name: # TODO: UISelectable using UIElement::UIElement; #or b.startswith(f.name) b in self.bases:
                if not f.invalid:
                    self.constructors.append(f)
            elif f.name == '~'+self.name:
                self.destructor = f
            elif f.templated:
                self.template_member_functions.append(f)
            elif counts[f.bind_as] > 1:
                self.overloaded_member_funcs[f.bind_as].append(f)
            else:
                self.singular_member_funcs.append(f)
        
        static_funcs = getsall(data,'doxygen/compounddef/sectiondef*/memberdef*'
                             ,test=[lambda d : d['@kind'] in {'public-static-func'}])
        self.static_funcs = [Function(f,None) for f in static_funcs[0]] if static_funcs else []
        pubvars = getsall(data,'doxygen/compounddef/sectiondef*/memberdef*'
                             ,test=[lambda d : d['@kind'] in {'public-attrib'}])
        self.member_vars = [Variable(d,self) for d in pubvars[0]] if pubvars else []
        
        #print(ls(data,'doxygen/compounddef'))
        #pprint(ls(data,'doxygen/compounddef/includes'))
        #pprint(gets(data,'doxygen/compounddef/listofallmembers'))
        
        self.properties = []
        self.extractProperties()
        self.properties = sorted(self.properties,key=lambda p : p.name)
        
        #self.typerefs = list(set(filter(findall_args(data,'@refid'))))
        #pprint(self.typerefs)
        #pprint(Type.refs)
        #pprint(dict(Type.refsmap))
        
        
        self.typerefs = Type.refs
        self.refsmap = Type.refsmap
        Type.reset_refs()
        
        self.find_includes()
        
    def extractProperties(self):
        self.propertyFunctions = []
        getters = {}
        setters = {}
        
        def trim(f):
            for n in ('Get','Set','Is','Set','get_','set_'):
                if f.bind_as.startswith(n):
                    return f.bind_as[len(n):]
            return f.bind_as
        def match(f):
            is_getter = f.bind_as.lower().startswith('get') or f.bind_as.lower().startswith('is')
            is_setter = f.bind_as.lower().startswith('set')
            if 'BIND_AS_PROPERTY' in f.comment or 'BIND_AS_ALIAS_' in f.comment:
                if is_setter or (not is_getter and f.ret.val == 'void'):
                    if trim(f) in setters:
                        print(f'!!WARNING: overriding setter {setters[trim(f)].scoped} -> {f.scoped}')
                        print(f'           returns: {setters[trim(f)].ret.val} -> {f.ret.val}')
                        print(f'           args: {setters[trim(f)].argstring} -> {f.argstring}')
                    setters[trim(f)] = f
                else:
                    if trim(f) in getters:
                        print(f'!!WARNING: overriding getter {getters[trim(f)].scoped} -> {f.scoped}')
                        print(f'           returns: {getters[trim(f)].ret.val} -> {f.ret.val}')
                        print(f'           args: {getters[trim(f)].argstring} -> {f.argstring}')
                    getters[trim(f)] = f
                self.propertyFunctions.append(f)
                return True
            return False
        
        for f in [*self.singular_member_funcs]:
            if match(f) and not BIND_PROPERTIES_ALSO_AS_FUNCTIONS:
                self.singular_member_funcs.remove(f)
                
        for name,funcs in [*self.overloaded_member_funcs.items()]:
            for f in [*funcs]:
                if match(f) and not BIND_PROPERTIES_ALSO_AS_FUNCTIONS:
                    self.overloaded_member_funcs[name].remove(f)
            if len(self.overloaded_member_funcs[name]) == 1:
                #print('Reassigning former overload ',name,f.scoped)
                self.singular_member_funcs.append(self.overloaded_member_funcs[name][0])
                del self.overloaded_member_funcs[name]
            elif len(self.overloaded_member_funcs[name]) == 0:
                del self.overloaded_member_funcs[name]
                
        properties = {k : (v,None) for k,v in getters.items()}
        for k,v in setters.items():
            if k in properties:
                properties[k] = (getters[k],v)
            else:
                properties[k] = (None,v)
        self.properties = [ Property(k,*v) for k,v in properties.items() ]
        #if self.name == 'StaticModel':
            #pprint([(f.name, f.bind_as) for f in self.member_funcs])
        
            
    def find_includes(self):
        self.includes = set()
        for r in self.refsmap:
            fn = path.join(base_dir,r+'.xml')
            if not path.exists(fn):
                tail = r.split('_')[-1]
                L=len('1aee85c8bb4263431ef586545ff082720b')
                fn = path.join(base_dir,r[:-(L+1)]+'.xml')
                if len(tail) != L or not path.exists(fn):
                    print(f'Could not find ref {r}!')
                    
            if fn in CLASS_INCLUDES:
                self.includes |= CLASS_INCLUDES[fn]
            else:
                print(f'{self.name}: Could not find include {r} (={fn})')
        
    def forbidden(self):
        skip = ''
        for f in forbid_files:
            if self.filename == f or self.filename.endswith('/'+f):
                skip = f'Forbidden file: {f}'
        if self.scoped in forbid_classes:
            skip += f'Forbidden class {self.scoped}'
        if self.data.get('@prot','') != 'public':
            skip += f"Non-public class {self.data.get('@prot','')}"
        return skip
        
    def __str__(self):
        
        singulars = ''.join(map(str,self.singular_member_funcs))
        overloads = ''.join(map(str,self.overloaded_member_funcs.values()))
        properties = ''.join(map(str,self.properties))
        variables = ''.join(map(str,self.member_vars))
        includes = '\n'.join(map(lambda i : f'#include <{i}>',[self.local_filename] + sorted(self.includes)))
        constructors = '\n    /*NONE*/'
        
        if self.constructors:
            if 'Urho3D::RefCounted' in self.bases:
                wrapped = []
                for f in self.constructors:
                    
                    argdefs = f.argstring[1:f.argstring.rfind(')')]
                    args = ', '.join([a.name for a in f.args])
                    wrapped.append(f'''[]({argdefs}) {{ 
            return Urho3D::MakeShared<{self.scoped}>({args});
        }}''')
                wrapped = ','.join(wrapped)
            
                b = f'''sol::factories({wrapped})'''
            else:
                b='''sol::constructors<{}>()'''.format(
            ''.join(f'\n        {"// " if f.templated else ""}{self.scoped}({f.get_arg_types()}),' for f in self.constructors)[:-1])
            
            constructors = bind_constructor(binding=b)
        
        if self.abstract:
            constructors = '\n    /*ABSTRACT*/'
            
        
        usings = using_binder_additions.get(self.binder_function_name(),None)
        if usings is not None:
            usings += '\n'
        else:
            usings = ''
            
        for f in using_file_additions:
            h = f.replace('.cpp','.h')
            if self.filename == h or self.filename.endswith('/'+h):
                usings += using_file_additions[f] + '\n'
                print('    USING',f,self.filename,using_file_additions[f])
                
        for f in include_file_additions:
            h = f.replace('.cpp','.h')
            if self.filename == h or self.filename.endswith('/'+h):
                includes += '\n' + include_file_additions[f]
                print('    INCLUDE',f,self.filename,include_file_additions[f])
                
        for f in extra_file_additions:
            h = f.replace('.cpp','.h')
            if self.filename == h or self.filename.endswith('/'+h):
                includes += '\n\n' + extra_file_additions[f]
                print('    INCLUDE',f,self.filename,extra_file_additions[f])
        
        
        # Always need the casters to be defined
        includes += '\n\nextern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;'
        
        if 'Urho3D::Object' in self.bases:
            usings += f'''

    casters[{cls.scoped}::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{{
        if (o->IsInstanceOf({cls.scoped}::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<{cls.scoped}>(({cls.scoped}*)o));
        return sol::nil;
    }};

'''
        
        
        if self.forbidden():
            skip_start = f'\n#if 0 // {self.forbidden()}\n'
            skip_end = f'\n#endif // {self.forbidden()}\n'
        else:
            skip_start = ''
            skip_end = ''
        
        return bind_class(
            filename = self.filename,
            constructors=constructors,
            members= singulars + overloads + properties + variables,
            bases=','.join(self.bases),
            name=self.name,
            scoped=self.scoped,
            scoped_underscore=self.scoped.replace('::','_'),
            usings=usings,
            includes=f'''{skip_start}
#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

{includes}
'''
            ) + f'{skip_end}'
    
    def binder_function_name(self):
        return 'bindClass_{scoped_underscore}'.format(scoped_underscore=self.scoped.replace('::','_'))
    
    def binder_function_decl(self):
        return f'''void {self.binder_function_name()}(sol::state_view& lua)'''
    
    def binder_function_call(self):
        return f'''{self.binder_function_name()}(lua)'''
            
#include <Urho3D/Scene/Node.h>

#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Scene.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Network/Connection.h>
        
cls = Class(data)

clsMap = {}

failed = []

for defn_file in [*glob(base_dir + 'class*.xml'),*glob(base_dir + 'struct*.xml')]:
    with open(defn_file,'r') as f:
        try:
            # The replacement is a cheat to get the SEPARATOR everywhere. Without it we were getting as an arg type '#text': '&', with it we get '#text': '<@@@> &', which is better.
            # The .strip() is because it needs to start with < at line 1 col 1 apparently.
            d = xmltodict.parse(f.read().replace('<',' <').strip(),cdata_separator=SEPARATOR)
            cls = Class(d)
            if not ('/Container/' in cls.filename  or '/Database/' in cls.filename or 'NO_BIND' in cls.comment):
                clsMap[cls.name] = cls
            elif cls.refid in CLASS_MAP:
                del CLASS_MAP[cls.refid]
        except Exception as e:
            print('Failed parsing class',defn_file,e)
            failed.append((defn_file,exc2tb(e)))
            if 0:
                traceback.print_exc()
            else:
                raise e
            
        
#print(repr(Class(data)))
cls = Class(data)
#print(cls)
with open('test-out-wrapped.cpp','w') as f:
    f.write(str(cls))
    
    f.write(pformat(clsMap.keys()) + '\n\n')
    
    f.write(f'''Failed:
{pformat(failed)}
''')
    
    f.write(str(clsMap['Vector3']))
    
    
dirs = defaultdict(list)


#########################
# GLOBAL FUNCTIONS ######
#########################


import shutil  
if path.exists('generated'):
    shutil.rmtree('generated/')
os.makedirs('generated',exist_ok=True)


failed = []
# generated/xml/namespaceUrho3D.xml
namespace_functions = {}
for defn_file in glob(base_dir + 'namespace*.xml'):
    with open(defn_file,'r') as f:
        try:
            # The replacement is a cheat to get the SEPARATOR everywhere. Without it we were getting as an arg type '#text': '&', with it we get '#text': '<@@@> &', which is better.
            # The .strip() is because it needs to start with < at line 1 col 1 apparently.
            d = xmltodict.parse(f.read().replace('<',' <').strip(),cdata_separator=SEPARATOR)
            print(defn_file)
            data = gets(d,'doxygen/compounddef')
            namespace = data.get('compoundname')
            
            
            functions = getsall(data,'sectiondef*/memberdef*'
                                ,test=[lambda d : d['@kind'] == 'func'])
            if functions:
                functions = [ Function(f,None) for f in functions[0]]
            
                namespace_functions[namespace] = functions
            
        except Exception as e:
            print('Failed parsing namespace',defn_file,e)
            failed.append((defn_file,exc2tb(e)))
            if 0:
                traceback.print_exc()
            else:
                raise e
  

function_headers = []
function_calls = []

for ns,functions in namespace_functions.items():
    #fn = fn = re.sub('.*/Source/Urho3D/','generated/',namespace+)
    nsu = ns.replace("::","_")
    
    includes = '\n'.join(sorted(set(re.sub('.*/Source/Urho3D/(.*)',r'#include <Urho3D/\1>',e.filename) for e in functions if not e.invalid)))
    
    # Filter out templated ones
    functions = [f for f in functions if not f.templated]
    # Filter out URHO3D_EVENT mis-identifications
    functions = [f for f in functions if f.invalid != 'URHO3D_EVENT']
    
    overloads = defaultdict(OverloadList)
    
    for f in functions:
        overloads[f.bind_as].append(f)
    
    if not includes:
        # All inums were forbidden
        continue
    
    h=path.join('generated',f'BindFunctions_{nsu}.h')
    function_headers.append(h)
    function_calls.append(f'bindFunctions_{nsu}(lua)')
    
    with open(h,'w') as f:
        f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindFunctions_{nsu}(sol::state_view& lua);

''')

    with open(path.join('generated',f'BindFunctions_{nsu}.cpp'),'w') as f:
        f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>
{includes}

void bindFunctions_{nsu}(sol::state_view& lua)
{{
    
using namespace {ns};

// Binding code uses type["NAME"] by default. We can use a reference to not have to change it.
// If we want to put the namespace functions in another table we could also do that.
auto& type = lua;
    
{''.join(map(str,overloads.values()))}

}}

''')

#########################
# GLOBAL FUNCTIONS END###
#########################

##############
# ENUMS ######
##############

class EnumValue(object):
    def __init__(self,data,Enum):
        self.data = data
        self.Enum = Enum
        self.comment = flatten(data['briefdescription']) + flatten(data['detaileddescription'])
        self.name = data['name']
        self.initializer = flatten(data.get('initializer',''))
    def __repr__(self):
        return f'''"{self.name}", {self.scoped}'''
    
    def global_assignment(self):
        return f'''lua["{self.name}"] = {self.scoped};'''
    
    @property
    def scoped(self):
        return self.Enum.scoped + '::' + self.name;
        

class Enum(object):
    def __init__(self,data,namespace):
        # Takes the enum memberdef
        self.refid = data.get('@id')
        self.name = flatten(data.get('name',''))
        self.values = [EnumValue(v,self) for v in getsall(data,'enumvalue*')]
        self.type = flatten(data.get('type'))
        self.comment = flatten(data['briefdescription']) + flatten(data['detaileddescription'])
        self.namespace = namespace
        self.filename = gets(data,'location/@file')
        self.enumclass = yesno2bool(data.get('@strong',''))
     
    
    def forbidden(self):
        skip = ''
        for f in forbid_files:
            if self.filename == f or self.filename.endswith('/'+f):
                skip += f'Forbidden file: {f} '
        return skip
        
        
    def __repr__(self):
        values = ','.join(f'\n    {{ {v} }}' for v in self.values)
        toglobal = ''
        if ALLOW_GLOBAL_ENUM_VARS:
            toglobal = ''.join(f'\n    {v.global_assignment()}' for v in self.values)
        # Note, can do new_enum<T,false> if we want the enum values to be writable
        forbid = self.forbidden()
        if not forbid:
            return f'''
        
lua.new_enum<{self.scoped}>( "{self.name}", {{ {values} }}
);{toglobal}'''

        else:
            return f'''
#if 0 // {forbid}
lua.new_enum<{self.scoped}>( "{self.name}", {{ {values} }}
);{toglobal}
#endif // FORBIDDEN'''
    
    @property
    def scoped(self):
        return ((self.namespace + '::') or '') + self.name
      
    
failed = []
# generated/xml/namespaceUrho3D.xml
namespace_enums = {}
for defn_file in glob(base_dir + 'namespace*.xml'):
    with open(defn_file,'r') as f:
        try:
            # The replacement is a cheat to get the SEPARATOR everywhere. Without it we were getting as an arg type '#text': '&', with it we get '#text': '<@@@> &', which is better.
            # The .strip() is because it needs to start with < at line 1 col 1 apparently.
            d = xmltodict.parse(f.read().replace('<',' <').strip(),cdata_separator=SEPARATOR)
            print(defn_file)
            data = gets(d,'doxygen/compounddef')
            namespace = data.get('compoundname')
            
            
            enums = getsall(data,'sectiondef*/memberdef*'
                                ,test=[lambda d : d['@kind'] == 'enum'])
            if enums:
                enums = [ Enum(e,namespace) for e in enums[0]]
            
                #pprint(enums)
                namespace_enums[namespace] = enums
            
        except Exception as e:
            print('Failed parsing namespace',defn_file,e)
            failed.append((defn_file,exc2tb(e)))
            if 0:
                traceback.print_exc()
            else:
                raise e
  

enum_headers = []
enum_calls = []

for ns,enums in namespace_enums.items():
    #fn = fn = re.sub('.*/Source/Urho3D/','generated/',namespace+)
    nsu = ns.replace("::","_")
    
    includes = '\n'.join(sorted(set(re.sub('.*/Source/Urho3D/(.*)',r'#include <Urho3D/\1>',e.filename) for e in enums if not e.forbidden())))
    
    if not includes:
        # All inums were forbidden
        continue
    
    h=path.join('generated',f'BindEnums_{nsu}.h')
    enum_headers.append(h)
    enum_calls.append(f'bindEnums_{nsu}(lua)')
    
    with open(h,'w') as f:
        f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindEnums_{nsu}(sol::state_view& lua);

''')

    with open(path.join('generated',f'BindEnums_{nsu}.cpp'),'w') as f:
        f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>
{includes}

void bindEnums_{nsu}(sol::state_view& lua)
{{
    
using namespace {ns};
    
{''.join(map(str,enums))}

}}

''')


for refid,cls in CLASS_MAP.items():
    fn = re.sub('.*/Source/Urho3D/','generated/',cls.filename)
    #print(fn,end='->')
    #print(path.dirname(fn))
    dname = path.dirname(fn)
    dirs[dname].append(cls)
    os.makedirs(dname,exist_ok=True)
    h = fn.replace('.h','.cpp')
    d,h = path.split(h)
    h = path.join(d,'Bind'+h)
    with open(h,'a') as f:
        # TODO: This fails for partial template specializations (e.g. fmt::formatter< Urho3D::String, Char >)
        if cls.template:
            f.write(f'''
{"#if 0 // forbidden template class: " + cls.forbidden() if cls.forbidden() else ""}
// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

{cls.binder_function_decl()} {{ }}

#if 0

{cls}

#endif
{"#endif // forbidden template class " + cls.forbidden() if cls.forbidden() else ""}
                ''')
        else:
            f.write(str(cls))
    
    
subsystem_headers = []
for dname,classes in dirs.items():
    print(dname)
    header = path.join(dname,'Bind'+path.basename(dname) + '.h')
    subsystem_headers.append(header)
    with open(header,'w') as f:
        defs = '\n'.join(sorted((c.binder_function_decl()+';') for c in classes if not c.forbidden()))
        f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

{defs}
''')
        
with open(path.join('generated','BindAllUrho3D.h'),'w') as f:
    f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_ALL(sol::state_view& lua);

''')
     
with open(path.join('generated','BindAllUrho3D.cpp'),'w') as f:
    includes =  '\n'.join((f'#include "{i.replace("generated/","")}"') for i in function_headers + enum_headers + sorted(subsystem_headers))
    calls = '\n'.join((f'    {call};') for call in function_calls) + '\n\n' + '\n'.join((f'    {call};') for call in enum_calls) + '\n\n' + '\n'.join(sorted((f'    {c.binder_function_call()};') for c in CLASS_MAP.values() if not c.forbidden()))
    f.write(f'''
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include "BindAllUrho3D.h"

{includes}

void bindClass_Urho3D_ALL(sol::state_view& lua) 
{{

{calls}
    
}}

''')


for f in glob('generated/**',recursive=True):
    if not path.isfile(f):
        continue
    with open(f) as r:
        data = r.read()
    try:
        with open(f.replace('generated/','synced-generated/')) as w:
            old = w.read()
    except FileNotFoundError:
        old = None
    if data != old:
        with open(f.replace('generated/','synced-generated/'),'w') as w:
            w.write(data)
        print('++Updated',f)
    else:
        print(' =Unchanged',f)
        
for f in glob('synced-generated/**',recursive=True):
    if not path.isfile(f):
        continue
    if not os.path.exists(f.replace('synced-generated/','generated/')):
        print('--Removed',f)
        os.remove(f)
            
        
    
#print(cls.find_includes())
#pprint(rets.keys())
#pprint(rets)
        
    
'''         
    ,"CreateChild",[](Node& n){{//, const Urho3D::String& s){{
        return SharedPtr<Node>(n.CreateChild());
    }}
    ,"CreateChildNamed",[](Node& n, const Urho3D::String& s){{
        return SharedPtr<Node>(n.CreateChild(s));
    }}
    ,"CreateComponent",[](Node& n, String type,sol::this_state s)->sol::object{{//, const Urho3D::String& s){{
        auto o = SharedPtr<Component>(n.CreateComponent(type));
        sol::state_view lua(s);
        if (!o || !casters.Contains(type))
            return sol::nil;
        return casters[type](o,lua);
    }}
    ,"CreateModel",[](Node& n){{//, const Urho3D::String& s){{
        return SharedPtr<StaticModel>(n.CreateComponent<StaticModel>());
    }}

    ,"TestIsType",[](sol::object a,sol::this_state s)->sol::object{{//, const Urho3D::String& s){{
        sol::state_view lua(s);
        if (a.is<sol::type>())
            return sol::make_object(lua, sol::type_name(lua,a.as<sol::type>()));
        else
            return sol::make_object(lua,false);
    }}
);
'''
