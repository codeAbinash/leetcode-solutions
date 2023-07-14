// by @codeAbinash
// Time : O(n)
// Space : O(1)

int singleNumber(int* nums, int numsSize) {
   int singleNumber = nums[0];
   for (int i = 1; i < numsSize; i++)
      singleNumber ^= nums[i];
   return singleNumber;
}