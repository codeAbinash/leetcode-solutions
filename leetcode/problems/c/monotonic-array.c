// by @codeAbinash
// Time : O(n)
// Space : O(1)

bool isMonotonic(int* nums, int numsSize) {
   bool isIncreasing = false, isDecreasing = false;

   for (int i = 0; i < numsSize - 1; i++) {
      if (nums[i] > nums[i + 1])
         isDecreasing = true;
      else if (nums[i] < nums[i + 1])
         isIncreasing = true;
      if (isIncreasing & isDecreasing)
         return false;
   }
   return true;
}