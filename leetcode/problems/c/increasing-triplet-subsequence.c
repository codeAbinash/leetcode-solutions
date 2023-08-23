// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "limits.h"

bool increasingTriplet(int* nums, int numsSize) {
   int i, min = INT_MAX, mid = INT_MAX;
   for (i = 0; i < numsSize; i++) {
      if (nums[i] <= min) min = nums[i];
      else if (nums[i] <= mid) mid = nums[i];
      else return true;
   }
   return false;
}