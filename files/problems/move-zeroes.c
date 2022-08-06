void moveZeroes(int* nums, int numsSize){
    int i, noZero = 0;
    for (i = 0; i < numsSize; i++)
        if(nums[i]){
            nums[noZero] = nums[i];
            noZero++;
        }
    while (noZero < numsSize){
        nums[noZero] = 0;
        noZero++;
    }
}