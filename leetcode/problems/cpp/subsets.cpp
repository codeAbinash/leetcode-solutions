// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   vector<vector<int>> subsets(vector<int>& nums) {
      int size = nums.size();
      int mask = 1 << size;
      vector<vector<int>> subsets(mask);
      for (int i = 1; i < mask; i++)
         for (int j = 0;j < size; j++)
            if (i & (1 << j))
               subsets[i].push_back(nums[j]);
      return subsets;
   }
};