// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "cmath"
using namespace std;

class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    int size = nums.size();
    vector<int> ans;
    for (int i = 0; i < size; i++) {
      int index = abs(nums[i]) - 1;
      if (nums[index] > 0)
        nums[index] = -nums[index];
    }
    for (int i = 0; i < size; i++)
      if (nums[i] > 0)
        ans.push_back(i + 1);
    return ans;
  }
};
