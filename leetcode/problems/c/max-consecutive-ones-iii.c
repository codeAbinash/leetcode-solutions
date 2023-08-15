// by @codeAbinash
// Time : O(n)
// Space : O(1)

int longestOnes(int* nums, int numsSize, int k) {
   int i = 0, j;
   for (j = 0; j < numsSize; ++j) {
      if (nums[j] == 0) k--;
      if (k < 0 && nums[i++] == 0) k++;
   }
   return j - i;
}