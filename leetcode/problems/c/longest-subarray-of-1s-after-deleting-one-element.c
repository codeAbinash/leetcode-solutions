// by @codeAbinash
// Time : O(n)
// Space : O(1)

int longestSubarray(int* nums, int numsSize) {
   int left = 0, i, right = 1;

   for (i = 0; i < numsSize; i++) {
      if (nums[i] == 0) right--;
      if (right < 0 && nums[left++] == 0) right++;
   }

   return i - left - 1;
}