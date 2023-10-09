// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int i, j = 0;
    for (i = 0; i < nums.size(); i++)
      if (nums[i] != nums[j])
        nums[++j] = nums[i];
    return j + 1;
  }
};
