//// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

int *getConcatenation(int *nums, int numsSize, int *returnSize) {
    int *newArr = (int *)malloc(numsSize * 2 * sizeof(int));
    *returnSize = numsSize * 2;
    for (int i = 0; i < numsSize; i++)
        newArr[i + numsSize] = newArr[i] = nums[i % numsSize];
    return newArr;
}