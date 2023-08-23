// by @codeAbinash
// Time : O(log n)
// Space : O(1)

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   int findPeakElement(vector<int>& nums) {
      int size = nums.size(), low = 0, high = size - 1;
      while (low < high) {
         int m = (low + high) >> 1;
         if (nums[m + 1] > nums[m])
            low = m + 1;
         else high = m;
      }
      return low;
   }
};
