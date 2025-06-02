numJobs = 20;
jobArray = Job.empty;

arrivalTimes = cumsum(rand(1, numJobs) * 2);  % random inter-arrival times

for i = 1:numJobs
    duration = rand() * 10 + 1;
    requiredResources = randi([1, 4]);
    priority = randi([1, 3]);
    arrivalTime = arrivalTimes(i);
    jobArray(end+1) = Job(duration, requiredResources, priority, arrivalTime);
end

save('jobInputData.mat', 'jobArray');
