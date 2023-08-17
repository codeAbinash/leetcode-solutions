// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "algorithm"
using namespace std;


class Solution {
public:
   int longestSubarray(vector<int>& nums) {
      int left = 0, i, right = 1;
      int size = nums.size();

      for (i = 0; i < size; i++) {
         if (nums[i] == 0) right--;
         if (right < 0 && nums[left++] == 0) right++;
      }

      return i - left - 1;
   }
};
