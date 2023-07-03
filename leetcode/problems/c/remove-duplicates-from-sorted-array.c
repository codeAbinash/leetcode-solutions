int removeDuplicates(int* nums, int numsSize){
    int i, j = 0;
    for (i = 0; i < numsSize; i++)
        if (nums[i] != nums[j])
            nums[++j] = nums[i];
    return j + 1;
}