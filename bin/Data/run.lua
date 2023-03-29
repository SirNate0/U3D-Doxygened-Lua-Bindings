-- Material animation example.
-- This sample is base on StaticScene, and it demonstrates:
--     - Usage of material shader animation for mush room material

function SubscribeToEvent(name, func)
    print("TODO",name,func)
end

print(input)
-- print(input.mouseMoveX)
print(type(input))
print(input.__type,input.__type.name,input:GetTypeName())

print(CreateMode,type(NOTCreateMode),CreateMode.__type)
for k,v in pairs(CreateMode) do
    print("CreateMode::",k,"value",v,"("..type(v)..")")
end

-- exit()

require "LuaScripts/Utilities/Sample"

function Start()
    -- Execute the common startup for samples
    SampleStart()

    -- Create the scene content
    CreateScene()

    -- Create the UI content
    CreateInstructions()

    -- Setup the viewport for displaying the scene
    SetupViewport()

    -- Set the mouse mode to use in the sample
    SampleInitMouseMode(MM_RELATIVE)

    -- Hook up to the frame update events
    SubscribeToEvents()
end

function CreateScene()
    scene_ = Scene(context)

    -- Create the Octree component to the scene. This is required before adding any drawable components, or else nothing will
    -- show up. The default octree volume will be from (-1000, -1000, -1000) to (1000, 1000, 1000) in world coordinates it
    -- is also legal to place objects outside the volume but their visibility can then not be checked in a hierarchically
    -- optimizing manner
    scene_:CreateComponent("Octree")

    -- Create a child scene node (at world origin) and a StaticModel component into it. Set the StaticModel to show a simple
    -- plane mesh with a "stone" material. Note that naming the scene nodes is optional. Scale the scene node larger
    -- (100 x 100 world units)
    local planeNode = scene_:CreateChild("Plane")
    planeNode.scale = Vector3(100.0, 1.0, 100.0)
    local planeObject = planeNode:CreateComponent("StaticModel")
    planeObject.model = cache:GetResource("Model", "Models/Plane.mdl")
--     planeObject.material = cache:GetResource("Material", "Materials/StoneTiled.xml")
    planeObject:SetMaterial(cache:GetResource("Material", "Materials/StoneTiled.xml"))

    -- Create a directional light to the world so that we can see something. The light scene node's orientation controls the
    -- light direction we will use the SetDirection() function which calculates the orientation from a forward direction vector.
    -- The light will use default settings (white light, no shadows)
    local lightNode = scene_:CreateChild("DirectionalLight")
    lightNode.direction = Vector3(0.6, -1.0, 0.8) -- The direction vector does not need to be normalized
    local light = lightNode:CreateComponent("Light")
    light.lightType = LIGHT_DIRECTIONAL

    -- Create more StaticModel objects to the scene, randomly positioned, rotated and scaled. For rotation, we construct a
    -- quaternion from Euler angles where the Y angle (rotation about the Y axis) is randomized. The mushroom model contains
    -- LOD levels, so the StaticModel component will automatically select the LOD level according to the view distance (you'll
    -- see the model get simpler as it moves further away). Finally, rendering a large number of the same object with the
    -- same material allows instancing to be used, if the GPU supports it. This reduces the amount of CPU work in rendering the
    -- scene.
    local mushroomMat = cache:GetResource("Material", "Materials/Mushroom.xml")
    -- Apply shader parameter animation to material
    local specColorAnimation = ValueAnimation(context)
    specColorAnimation:SetKeyFrame(0.0, Variant(Color(0.1, 0.1, 0.1, 16.0)))
    specColorAnimation:SetKeyFrame(1.0, Variant(Color(1.0, 0.0, 0.0, 2.0)))
    specColorAnimation:SetKeyFrame(2.0, Variant(Color(1.0, 1.0, 0.0, 2.0)))
    specColorAnimation:SetKeyFrame(3.0, Variant(Color(0.1, 0.1, 0.1, 16.0)))
    -- Optionally associate material with scene to make sure shader parameter animation respects scene time scale
    mushroomMat.scene = scene_
    mushroomMat:SetShaderParameterAnimation("MatSpecColor", specColorAnimation)

    local NUM_OBJECTS = 200
    for i = 1, NUM_OBJECTS do
        local mushroomNode = scene_:CreateChild("Mushroom")
        mushroomNode.position = Vector3(Random(90.0) - 45.0, 0.0, Random(90.0) - 45.0)
        mushroomNode.rotation = Quaternion(0.0, Random(360.0), 0.0)
        mushroomNode:SetScale(0.5 + Random(2.0))
        local mushroomObject = mushroomNode:CreateComponent("StaticModel")
        mushroomObject.model = cache:GetResource("Model", "Models/Mushroom.mdl")
        mushroomObject:SetMaterial(mushroomMat)
    end

    -- Create a scene node for the camera, which we will move around
    -- The camera will use default settings (1000 far clip distance, 45 degrees FOV, set aspect ratio automatically)
    cameraNode = scene_:CreateChild("Camera")
    cameraNode:CreateComponent("Camera")

    -- Set an initial position for the camera scene node above the plane
    cameraNode.position = Vector3(0.0, 5.0, 0.0)
end

function CreateInstructions()
    print("Unfinished Instructions")
end
function CreateInstructionsOld()
    -- Construct new Text object, set string to display and font to use
    local instructionText = ui.root:CreateChild("Text")
    instructionText:SetText("Use WASD keys and mouse to move")
    instructionText:SetFont(cache:GetResource("Font", "Fonts/Anonymous Pro.ttf"), 15)

    -- Position the text relative to the screen center
    instructionText.horizontalAlignment = HA_CENTER
    instructionText.verticalAlignment = VA_CENTER
    instructionText:SetPosition(0, ui.root.height / 4)
end

function SetupViewport()
    -- Set up a viewport to the Renderer subsystem so that the 3D scene can be seen. We need to define the scene and the camera
    -- at minimum. Additionally we could configure the viewport screen size and the rendering path (eg. forward / deferred) to
    -- use, but now we just use full screen and default render path configured in the engine command line options
    local viewport = Viewport(context, scene_, cameraNode:GetComponent("Camera"))
    renderer:SetViewport(0, viewport)
end

function MoveCamera(timeStep)
    -- Do not move if the UI has a focused element (the console)
    if ui.focusElement ~= nil then
        return
    end

    -- Movement speed as world units per second
    local MOVE_SPEED = 20.0
    -- Mouse sensitivity as degrees per pixel
    local MOUSE_SENSITIVITY = 0.1

    -- Use this frame's mouse motion to adjust camera node yaw and pitch. Clamp the pitch between -90 and 90 degrees
    local mouseMove = input.mouseMove
    yaw = yaw +MOUSE_SENSITIVITY * mouseMove.x
    pitch = pitch + MOUSE_SENSITIVITY * mouseMove.y
    pitch = Clamp(pitch, -90.0, 90.0)

    -- Construct new orientation for the camera scene node from yaw and pitch. Roll is fixed to zero
    cameraNode.rotation = Quaternion(pitch, yaw, 0.0)

    -- Read WASD keys and move the camera scene node to the corresponding direction if they are pressed
    -- Use the Translate() function (default local space) to move relative to the node's orientation.
    if input:GetKeyDown(KEY_W) then
        cameraNode:Translate(Vector3(0.0, 0.0, 1.0) * MOVE_SPEED * timeStep)
    end
    if input:GetKeyDown(KEY_S) then
        cameraNode:Translate(Vector3(0.0, 0.0, -1.0) * MOVE_SPEED * timeStep)
    end
    if input:GetKeyDown(KEY_A) then
        cameraNode:Translate(Vector3(-1.0, 0.0, 0.0) * MOVE_SPEED * timeStep)
    end
    if input:GetKeyDown(KEY_D) then
        cameraNode:Translate(Vector3(1.0, 0.0, 0.0) * MOVE_SPEED * timeStep)
    end
end

function SubscribeToEvents()
    -- Subscribe HandleUpdate() function for processing update events
    SubscribeToEvent("Update", "HandleUpdate")
end

function HandleUpdate(eventType, eventData)
    -- Take the frame time step, which is stored as a float
    local timeStep = eventData["TimeStep"]:GetFloat()

    -- Move the camera, scale movement with time step
    MoveCamera(timeStep)
end

Start()

function old()
function createCorutines()
    local totalTime_ = 0
    local sleepedCoroutines_ = {}
    local waitEventCoroutines_ = {}

    function coroutine.start(func)
        if func == nil then
            return nil
        end

        local co = coroutine.create(func)
        return coroutine.resume(co)
    end

    function coroutine.sleep(time)
        local co = coroutine.running()
        if co == nil then
            return
        end

        sleepedCoroutines_[co] = totalTime_ + time

        return coroutine.yield(co)
    end

    function coroutine.update(steptime)
        totalTime_ = totalTime_ + steptime

        local coroutines = {}
        for co, wakeupTime in pairs(sleepedCoroutines_) do
            if wakeupTime < totalTime_ then
                table.insert(coroutines, co)
            end
        end

        for _, co in ipairs(coroutines) do
            sleepedCoroutines_[co] = nil
            coroutine.resume(co)
        end
    end

    function coroutine.waitevent(event)
        local co = coroutine.running()
        if co == nil then
            return
        end

        if waitEventCoroutines_[event] == nil then
            waitEventCoroutines_[event] = { co }
        else
            table.insert(waitEventCoroutines_[event], co)
        end

        return coroutine.yield(co)
    end

    function coroutine.sendevent(event)
        local coroutines = waitEventCoroutines_[event]
        if coroutines == nil then
            return
        end

        waitEventCoroutines_[event] = nil

        for _, co in ipairs(coroutines) do
            coroutine.resume(co)
        end
    end
end


if 0 then
    print("Why does this still execute!?!")
end



v = Vector3()
print(v)
v.x_ = 5
print(v)
v = Vector3(1,2,3)
print(v)

if false then

    print(CreateMode,type(NOTCreateMode),CreateMode.__type)
    for k,v in pairs(CreateMode) do
        print("CreateMode::",k,"value",v,"("..type(v)..")")
    end
    print(CreateMode.LOCAL)
    print(LOCAL)

    print("Context",context)

    so = staticObject.new()


    for k,v in pairs(staticObject) do
        print("staticObject::",k,"value",v,"("..type(v)..")")
    end

    for k,v in pairs(so.__type) do
        print("so.",k,"value",v,"("..type(v)..")")
    end

    print("so:func() = ",so:func())

    ro = runtimeObject.new()

    for k,v in pairs(runtimeObject) do
        print("runtimeObject::",k,"value",v,"("..type(v)..")")
    end

    for k,v in pairs(ro.__type) do
        print("ro.",k,"value",v,"("..type(v)..")")
    end

    print("ro:func() = ",ro:func())

end

scene_ = Scene(context);
print("GOOD - Scene Made")

local n = Node(context);
print("GOOD - Node Made")
print(n)
print(v.x_)
print(Node)
print("^Node")
for k,v in pairs(Node) do
    print("Node::",k,"value",v)
end
-- print(n.__type,Node);
print("^type, Node")
print(n.enabled)
n.name = ("test node")
print("Good - Node Named '" .. n.name .. "'")


-- Create octree, use default volume (-1000, -1000, -1000) to (1000, 1000, 1000)
-- Create a physics simulation world with default parameters, which will update at 60ps. Like the Octree must
-- exist before creating drawable components, the PhysicsWorld must exist before creating physics components.
-- Finally, create a DebugRenderer component so that we can draw physics debug geometry

print(CreateMode)

function StringHash(s)
    return s
end

function Cast(obj,name)
    return obj
end

cache = context:GetSubsystem("ResourceCache")
print('Cache',cache)
print(cache.GetResource)

-- c = n:CreateComponent(StringHash("Octree"),CreateMode.LOCAL,0)
c = n:CreateComponent("Octree",CreateMode.LOCAL,0)

print("Good, component created",c)

print("FINISHED TESTING")
print("STARTING SCRIPT")

--     scene_ = Scene(context)
scene_ = n;
    -- Create octree, use default volume (-1000, -1000, -1000) to (1000, 1000, 1000)
    -- Create a physics simulation world with default parameters, which will update at 60ps. Like the Octree must
    -- exist before creating drawable components, the PhysicsWorld must exist before creating physics components.
    -- Finally, create a DebugRenderer component so that we can draw physics debug geometry
    scene_:CreateComponent("Octree",CreateMode.LOCAL,0)
    scene_:CreateComponent("PhysicsWorld",CreateMode.LOCAL,0)
    scene_:CreateComponent("DebugRenderer",CreateMode.LOCAL,0)

    -- Create a Zone component for ambient lighting & fog control
    local zoneNode = scene_:CreateChild("Zone")
print("Zone Node Created")
    local zone = zoneNode:CreateComponent("Zone")
    
    print(zone,type(zone))
    z2 = Cast(zone,"Zone")
    print('Cast',zone,type(zone))
    print('zone',Zone.__type.is(zone))
    print('z2',Zone.__type.is(z2))
    zone = z2
    print('zone',Zone.__type.is(zone))
print("Zone Created")
    zone.boundingBox = BoundingBox(-1000.0, 1000.0)
    zone.ambientColor = Color(0.15, 0.15, 0.15)
    zone.fogColor = Color(0.5, 0.5, 0.7)
    zone.fogStart = 100.0
    zone.fogEnd = 300.0

print("Zone Setup")
    -- Create a directional light to the world. Enable cascaded shadows on it
    local lightNode = scene_:CreateChild("DirectionalLight")
    lightNode.direction = Vector3(0.6, -1.0, 0.8)
    local light = lightNode:CreateComponent("Light")
    light = Cast(light,"Light")
print("Light Created",Light.__type.is(light))
    light.lightType = LightType.LIGHT_DIRECTIONAL
print("Type")
    light.castShadows = true
print("From")
    light.shadowBias = BiasParameters(0.00025, 0.5)
print("Here")
    -- Set cascade splits at 10, 50 and 200 world units, fade shadows out at 80% of maximum shadow distance
    light.shadowCascade = CascadeParameters(10.0, 50.0, 200.0, 0.0, 0.8)
print("Light Setup")
    if true then
        -- Create a floor object, 500 x 500 world units. Adjust position so that the ground is at zero Y
        local floorNode = scene_:CreateChild("Floor")
        floorNode.position = Vector3(0.0, -0.5, 0.0)
        floorNode.scale = Vector3(500.0, 1.0, 500.0)
        local floorObject = floorNode:CreateComponent("StaticModel")
--         floorObject.model = cache:GetResource("Model", "Models/Box.mdl")
        print("HERE",cache,ResourceCache.__type.is(cache))
        floorObject.model = (cache:GetResource("Model", "Models/Box.mdl"))
        print("HERE")
--         floorObject.material = cache:GetResource("Material", "Materials/StoneTiled.xml")
        floorObject.material = (cache:GetResource("Material", "Materials/StoneTiled.xml"))
        print("HERE")
        -- Make the floor physical by adding RigidBody and CollisionShape components
        local body = floorNode:CreateComponent("RigidBody")
        local shape = floorNode:CreateComponent("CollisionShape")
        -- Set a box shape of size 1 x 1 x 1 for collision. The shape will be scaled with the scene node scale, so the
        -- rendering and physics representation sizes should match (the box model is also 1 x 1 x 1.)
        shape:SetBox(Vector3(1.0, 1.0, 1.0))
    end

    -- Create static mushrooms with triangle mesh collision
    local NUM_MUSHROOMS = 50
    for i = 1, NUM_MUSHROOMS do
        local mushroomNode = scene_:CreateChild("Mushroom")
        mushroomNode.position = Vector3(Random(400.0) - 200.0, 0.0, Random(400.0) - 200.0)
        mushroomNode.rotation = Quaternion(0.0, Random(360.0), 0.0)
        mushroomNode:SetScale(5.0 + Random(5.0))
        local mushroomObject = mushroomNode:CreateComponent("StaticModel")
        mushroomObject.model = cache:GetResource("Model", "Models/Mushroom.mdl")
        mushroomObject.material = cache:GetResource("Material", "Materials/Mushroom.xml")
        mushroomObject.castShadows = true

        local body = mushroomNode:CreateComponent("RigidBody")
        local shape = mushroomNode:CreateComponent("CollisionShape")
        -- By default the highest LOD level will be used, the LOD level can be passed as an optional parameter
        shape:SetTriangleMesh(mushroomObject.model)
    end

    -- Start coroutine to create a large amount of falling physics objects
    
    print('Starting Coroutine')
    print(coroutine.start(function()
            local NUM_OBJECTS = 1000
            for i = 1, NUM_OBJECTS do
                print('Creating Object',i)
                local boxNode = scene_:CreateChild("Box")
                boxNode.position = Vector3(0.0, 100.0, 0.0)
                local boxObject = boxNode:CreateComponent("StaticModel")
                boxObject.model = cache:GetResource("Model", "Models/Box.mdl")
                boxObject.material = cache:GetResource("Material", "Materials/StoneSmall.xml")
                boxObject.castShadows = true

                -- Give the RigidBody mass to make it movable and also adjust friction
                local body = boxNode:CreateComponent("RigidBody")
                body.mass = 1.0
                body.friction = 1.0

                -- Set linear velocity
                body.linearVelocity = Vector3(0.0, -50.0, 0.0)

                -- Disable collision event signaling to reduce CPU load of the physics simulation
                body.collisionEventMode = COLLISION_NEVER
                local shape = boxNode:CreateComponent("CollisionShape")
                shape:SetBox(Vector3(1.0, 1.0, 1.0))
                -- sleep coroutine
                coroutine.sleep(0.1)
            end
        end))
    

    -- Create the camera. Limit far clip distance to match the fog. Note: now we actually create the camera node outside
    -- the scene, because we want it to be unaffected by scene load/save
    cameraNode = Node(context)
    print("here")
    local camera = cameraNode:CreateComponent("Camera")
    print("there")
    camera.farClip = 300.0
    print("everywhere")
    -- Set an initial position for the camera scene node above the floor
    cameraNode.position = Vector3(0.0, 3.0, -20.0)
print("DONE")

end
