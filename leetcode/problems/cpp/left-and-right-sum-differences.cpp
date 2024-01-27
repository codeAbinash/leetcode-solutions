// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include <vector>
using namespace std;

class Solution {
 public:
   vector<int> leftRightDifference(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n);

      int r_sum = 0, l_sum = 0;
      for (int i = 0; i < n; i++) r_sum += nums[i];

      for (int i = 0; i < n; i++) {
         r_sum -= nums[i];
         ans[i] = abs(r_sum - l_sum);
         l_sum += nums[i];
      }

      return ans;
   }
};