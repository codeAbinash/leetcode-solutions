int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* arr = malloc(sizeof(int) * numsSize);
    int sum = 0, i;
    *returnSize = numsSize;

    for (i = 0; i < numsSize; i++) {
        sum += nums[i];
        arr[i] = sum;
    }
    return arr;
}