// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
  public:
   int missingNumber(vector<int>& nums) {
      int xor1 = 0, xor2 = 0;
      for (int i = 0; i < nums.size(); i++) {
         xor1 ^= nums[i];
         xor2 ^= i;
      }
      xor2 ^= nums.size();
      return xor1 ^ xor2;
   }
};
