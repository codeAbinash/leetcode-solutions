// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "algorithm"
using namespace std;


class Solution {
public:
   int maxOperations(vector<int>& nums, int k) {
      int i = 0, j = nums.size() - 1;
      int ans = 0;
      sort(nums.begin(), nums.end());

      while (i < j) {
         int total = nums[i] + nums[j];
         if (total == k) i++, j--, ans++;
         else if (total < k) i++;
         else j--;
      }

      return ans;
   }
};