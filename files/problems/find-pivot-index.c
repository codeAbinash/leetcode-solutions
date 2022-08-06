int pivotIndex(int* nums, int numsSize) {
    int i,sum = 0;

    for(i = 0; i < numsSize; i++)
        sum += nums[i];

    int leftSum = 0, rightSum = 0;
    for(i = 0; i < numsSize; i++){
        rightSum = sum - leftSum - nums[i];
        if(leftSum == rightSum)
            return i;
        leftSum += nums[i];
    }
    if(i == numsSize) return -1;

    return i;
}