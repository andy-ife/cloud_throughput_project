% global simulation params
numJobs = 20;
maxResources = 4;
maxPriority = 3;

jobArray = Job.empty;

% get last time step
last = 0 + 0.5*(numJobs - 1);

% job arrival times in steps of 0.5
arrivalTime = (0:.5:last)';

% randomly create array of Jobs
for i = 1:numJobs
    duration = rand() * 1; % duration ranges from 0 - 1 seconds
    requiredResources = randi([1, maxResources]);
    priority = randi([1, maxPriority]);
    jobArray(end+1) = Job(duration, requiredResources, priority, arrivalTime(i,:));
end

% convert Job array to 4xnumJobs MATLAB array
jobMatArray = zeros(numJobs, 4);
for i = 1:numJobs
    jobMatArray(i, :) = [
        jobArray(i).arrivalTime; 
        jobArray(i).duration;
        jobArray(i).requiredResources; 
        jobArray(i).priority];
end

% split array into datavals and timevals
datavals = jobMatArray(:, 2:end);
timevals = jobMatArray(:, 1);

% create time series
jobTsFCFS = timeseries(datavals, timevals);
jobTsSJN = timeseries(sortrows(datavals, 1), timevals);
jobTsPriority = timeseries(sortrows(datavals, 3, "descend"), timevals);

% save time series
save("jobTsFileFCFS.mat", "jobTsFCFS");
save("jobTsFileSJN.mat", "jobTsSJN");
save("jobTsFilePriority.mat", "jobTsPriority");