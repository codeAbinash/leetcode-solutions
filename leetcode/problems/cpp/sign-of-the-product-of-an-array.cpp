// by @codeAbinash
// Time : O(n)
// Space : O(1)


#include "vector"
using namespace std;

class Solution {
public:
   int arraySign(vector<int>& nums) {
      int minus = 0, numsSize = nums.size();
      for (int i = 0; i < numsSize; i++) {
         if (nums[i] == 0) return 0;
         if (nums[i] < 0) minus++;
      }
      return minus & 1 ? -1 : 1;
   }
};