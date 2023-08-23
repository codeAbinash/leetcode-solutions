// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "climits"
using namespace std;

class Solution {
public:
   bool increasingTriplet(vector<int>& nums) {
      int n = nums.size();
      if (n < 3) return false;
      int min1 = INT_MAX, min2 = INT_MAX;
      for (auto num : nums) {
         if (num <= min1) min1 = num;
         else if (num <= min2) min2 = num;
         else return true;
      }
      return false;
   }
};
