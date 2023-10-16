// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "climits"
using namespace std;

class Solution {
public:
  int thirdMax(vector<int>& nums) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    bool hasThirdMax = 0;

    for (auto num : nums)
      first = max(first, num);

    for (auto num : nums)
      if (num != first)
        second = max(second, num);

    for (auto num : nums)
      if (num != first && num != second) {
        third = max(third, num);
        hasThirdMax = 1;
      }
    return hasThirdMax ? third : first;
  }
};
