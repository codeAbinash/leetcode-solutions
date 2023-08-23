#include "limits.h"

// by @codeAbinash
// Time : O(n)
// Space : O(1)

inline double max(double a, double b) {
   return a > b ? a : b;
}

double findMaxAverage(int* nums, int numsSize, int k) {
   double sum = 0, result = INT_MIN;
   for (int i = 0; i < numsSize; i++) {
      if (i < k) sum += nums[i];
      else {
         result = max(sum, result);
         sum += nums[i] - nums[i - k];
      }
   }
   result = max(sum, result);
   return result / k;
}
