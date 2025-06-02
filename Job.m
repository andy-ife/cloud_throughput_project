classdef Job
    properties
        duration
        requiredResources
        priority
        arrivalTime
    end

    methods
        function obj = Job(duration, requiredResources, priority, arrivalTime)
            obj.duration = duration;
            obj.requiredResources = requiredResources;
            obj.priority = priority;
            obj.arrivalTime = arrivalTime;
        end
    end
end
