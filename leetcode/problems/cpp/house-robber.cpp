// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
  public:
   int rob(vector<int>& nums) {
      int rob1 = 0, rob2 = 0, tmp = 0;
      for (int i = 0; i < nums.size(); i++) {
         tmp = max(rob1 + nums[i], rob2);
         rob1 = rob2;
         rob2 = tmp;
      }
      return rob2;
   }
};
