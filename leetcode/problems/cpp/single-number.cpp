// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "iostream"
using namespace std;

class Solution {
public:
   int singleNumber(vector<int>& nums) {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int singleNumber = 0;
      for (auto num : nums)
         singleNumber ^= num;
      return singleNumber;
   }
};