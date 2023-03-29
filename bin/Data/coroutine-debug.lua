print("DEBUGGING COROUTINE")
local totalTime_ = 0
local sleepedCoroutines_ = {}
local waitEventCoroutines_ = {}

function coroutine.start(func)
    if func == nil then
        print('Coroutine nil!!!')
        return nil
    end
    print('Coroutine Started')

    local co = coroutine.create(func)
    print("SDKFJsLKF:KAJ:FLKA")
    return coroutine.resume(co)
end

function coroutine.sleep(time)
    local co = coroutine.running()
    if co == nil then
        print('Couroutine sleep failed',time)
        return
    end
    print('Coroutine Sleep',time,'->',totalTime_ + time)

    sleepedCoroutines_[co] = totalTime_ + time

    return coroutine.yield(co)
end

function coroutine.update(steptime)
    totalTime_ = totalTime_ + steptime
--     print('Coroutine Updated',totalTime_)
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
