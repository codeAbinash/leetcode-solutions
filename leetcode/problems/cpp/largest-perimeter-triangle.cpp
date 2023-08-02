// by @codeAbinash
// Time : O(n * lon(n))
// Space : O(1)

#include "algorithm"
#include "vector"
using namespace std;

class Solution {
public:
   int largestPerimeter(vector<int>& nums) {
      size_t len = nums.size();
      sort(nums.begin(), nums.end());

      for (int i = len - 1; i > 1; i--)
         if (nums[i] < nums[i - 1] + nums[i - 2])
            return nums[i] + nums[i - 1] + nums[i - 2];

      return 0;
   }
};