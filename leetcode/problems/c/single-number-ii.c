// by @codeAbinash
// Time : O(n)
// Space : O(1)

int singleNumber(int* nums, int numsSize) {
   int ones = 0, tows = 0;
   for (int i = 0;i < numsSize; i++) {
      ones = (ones ^ nums[i]) & (~tows);
      tows = (tows ^ nums[i]) & (~ones);
   }
   return ones;
}