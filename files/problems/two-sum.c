int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int diff, i, j;
    int *newArr = (int*)malloc(sizeof(int) * 2);
    for (i = 0; i < numsSize; i++) {
        diff = target - nums[i];
        for (j = i + 1; j < numsSize; j++) {
            if (diff == nums[j]) {
                newArr[0] = i;
                newArr[1] = j;
                return newArr;
            }
        }
    }
    return NULL;
}