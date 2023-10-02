// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "cmath"
#include "vector"
using namespace std;

class Solution {
public:
  vector<int> sortedSquares(vector<int>& nums) {
    int size = nums.size();
    int left = 0, right = size - 1;
    vector<int> ans(size);
    for (int i = size - 1; i >= 0; i--) {
      if (abs(nums[left]) > abs(nums[right])) {
        ans[i] = nums[left] * nums[left];
        left++;
      } else {
        ans[i] = nums[right] * nums[right];
        right--;
      }
    }
    return ans;
  }
};
