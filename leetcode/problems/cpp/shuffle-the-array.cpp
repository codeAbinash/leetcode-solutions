// by @codeAbinash
// Time : O(n)
// Space : O(n)


#include "iostream"
#include "vector"
using namespace std;


class Solution {
public:
   vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> ans(n * 2);
      for (int i = 0, j = 0; i < n; i++, j += 2) {
         ans[j] = nums[i];
         ans[j + 1] = nums[i + n];
      }
      return ans;
   }
};
