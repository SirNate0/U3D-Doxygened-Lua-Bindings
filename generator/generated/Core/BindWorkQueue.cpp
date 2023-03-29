
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/WorkQueue.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/WorkQueue.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/WorkQueue.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_WorkQueue(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::WorkQueue::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::WorkQueue::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::WorkQueue>((Urho3D::WorkQueue*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::WorkQueue>( "WorkQueue"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::WorkQueue>(context);
        });

// Members

    /*Create worker threads. Can only be called once.*//*(unsigned numThreads)*/
    type["CreateThreads"] = static_cast<void (Urho3D::WorkQueue::*)(unsigned)>(&Urho3D::WorkQueue::CreateThreads) ;
    /*Get pointer to an usable  WorkItem from the item pool. Allocate one if no more free items.*//*()*/
    type["GetFreeItem"] = static_cast<SharedPtr<WorkItem> (Urho3D::WorkQueue::*)()>(&Urho3D::WorkQueue::GetFreeItem) ;
    /*Add a work item and resume worker threads.*//*(const SharedPtr< WorkItem > &item)*/
    type["AddWorkItem"] = static_cast<void (Urho3D::WorkQueue::*)(const  SharedPtr<  WorkItem > &)>(&Urho3D::WorkQueue::AddWorkItem) ;
    /*Remove a work item before it has started executing. Return true if successfully removed.*//*(SharedPtr< WorkItem > item)*/
    type["RemoveWorkItem"] = static_cast<bool (Urho3D::WorkQueue::*)(SharedPtr<  WorkItem >)>(&Urho3D::WorkQueue::RemoveWorkItem) ;
    /*Remove a number of work items before they have started executing. Return the number of items successfully removed.*//*(const Vector< SharedPtr< WorkItem > > &items)*/
    type["RemoveWorkItems"] = static_cast<unsigned (Urho3D::WorkQueue::*)(const  Vector<  SharedPtr<  WorkItem > > &)>(&Urho3D::WorkQueue::RemoveWorkItems) ;
    /*Pause worker threads.*//*()*/
    type["Pause"] = static_cast<void (Urho3D::WorkQueue::*)()>(&Urho3D::WorkQueue::Pause) ;
    /*Resume worker threads.*//*()*/
    type["Resume"] = static_cast<void (Urho3D::WorkQueue::*)()>(&Urho3D::WorkQueue::Resume) ;
    /*Finish all queued work which has at least the specified priority. Main thread will also execute priority work. Pause worker threads if no more work remains.*//*(unsigned priority)*/
    type["Complete"] = static_cast<void (Urho3D::WorkQueue::*)(unsigned)>(&Urho3D::WorkQueue::Complete) ;
    /*Set the pool telerance before it starts deleting pool items.*//*(int tolerance)*/
    type["SetTolerance"] = static_cast<void (Urho3D::WorkQueue::*)(int)>(&Urho3D::WorkQueue::SetTolerance) ;
    /*Set how many milliseconds maximum per frame to spend on low-priority work, when there are no worker threads.*//*(int ms)*/
    type["SetNonThreadedWorkMs"] = static_cast<void (Urho3D::WorkQueue::*)(int)>(&Urho3D::WorkQueue::SetNonThreadedWorkMs) ;
    /*Return number of worker threads.*//*() const*/
    type["GetNumThreads"] = static_cast<unsigned (Urho3D::WorkQueue::*)() const>(&Urho3D::WorkQueue::GetNumThreads) ;
    /*Return whether all work with at least the specified priority is finished.*//*(unsigned priority) const*/
    type["IsCompleted"] = static_cast<bool (Urho3D::WorkQueue::*)(unsigned) const>(&Urho3D::WorkQueue::IsCompleted) ;
    /*Return whether the queue is currently completing work in the main thread.*//*() const*/
    type["IsCompleting"] = static_cast<bool (Urho3D::WorkQueue::*)() const>(&Urho3D::WorkQueue::IsCompleting) ;
    /*Return the pool tolerance.*//*() const*/
    type["GetTolerance"] = static_cast<int (Urho3D::WorkQueue::*)() const>(&Urho3D::WorkQueue::GetTolerance) ;
    /*Return how many milliseconds maximum to spend on non-threaded low-priority work.*//*() const*/
    type["GetNonThreadedWorkMs"] = static_cast<int (Urho3D::WorkQueue::*)() const>(&Urho3D::WorkQueue::GetNonThreadedWorkMs) ;

}

