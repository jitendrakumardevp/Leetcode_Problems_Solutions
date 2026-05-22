double findMaxAverage(int* nums, int numsSize, int k) {

    double maxSubArrayAvg = INT_MIN;
    double sum = 0;

    if (numsSize == 1) {
        maxSubArrayAvg = nums[0];
    }

    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    maxSubArrayAvg = sum / k;

    for (int i = k; i < numsSize; i++) {
        sum += nums[i];
        sum -= nums[i - k];

        double currentAvg = sum / k;

        if (currentAvg > maxSubArrayAvg) {
            maxSubArrayAvg = currentAvg;
        }
    }

    return maxSubArrayAvg;
}
