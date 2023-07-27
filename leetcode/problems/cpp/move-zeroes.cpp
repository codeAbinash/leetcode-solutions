// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   void moveZeroes(vector<int>& nums) {
      int index = 0;
      int size = nums.size();

      for (auto num : nums)
         if (num)
            nums[index++] = num;

      while (size > index)
         nums[index++] = 0;
   }
};