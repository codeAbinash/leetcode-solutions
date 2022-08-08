int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    int sum = 0;

    for(int i = 0; i < numsSize; i++) {
        if(sum < 0)
            sum = 0;
        sum += nums[i];
        if(sum > max)
            max = sum;
    }
    return max;
}