// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;
class Solution {
public:
   int singleNumber(vector<int>& nums) {
      int ones = 0, tows = 0;
      for (auto num : nums) {
         ones = (ones ^ num) & (~tows);
         tows = (tows ^ num) & (~ones);
      }
      return ones;
   }
};