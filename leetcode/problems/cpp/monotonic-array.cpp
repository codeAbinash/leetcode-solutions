// by @codeAbinash
// Time : O(n)
// Space : O(1)
#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   bool isMonotonic(vector<int>& nums) {
      bool isIncreasing = false, isDecreasing = false;
      int numsSize = nums.size();
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
};

