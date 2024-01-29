// by @codeAbinash
// Time : O(n)
// Space : O(1)

int* runningSum(int* nums, int numsSize, int* returnSize) {
   *returnSize = numsSize;
   for (int i = 1; i < numsSize; i++) nums[i] += nums[i - 1];
   return nums;
}