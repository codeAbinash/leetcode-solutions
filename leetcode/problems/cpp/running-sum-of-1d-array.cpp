// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;


class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    int len = nums.size();
    for (int i = 1; i < len;i++)
      nums[i] += nums[i - 1];
    return nums;
  }
};
