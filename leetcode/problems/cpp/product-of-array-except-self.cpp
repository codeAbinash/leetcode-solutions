// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   vector<int> productExceptSelf(vector<int>& nums) {
      int left = 1;
      int right = 1;
      int n = nums.size();
      vector<int> result(n, 1);
      for (int i = 0; i < n; i++) {
         result[i] *= left;
         left *= nums[i];
         result[n - 1 - i] *= right;
         right *= nums[n - 1 - i];
      }
      return result;
   }
};