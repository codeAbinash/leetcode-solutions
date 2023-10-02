// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0, max = 0;
    for (auto num : nums) {
      if (num == 1) { count++; continue; }
      if (count > max) max = count;
      count = 0;
    }
    return count > max ? count : max;
  }
};
