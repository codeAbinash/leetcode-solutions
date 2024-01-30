// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
 public:
   int sumOddLengthSubarrays(vector<int>& arr) {
      int n = arr.size();
      int sum = 0;
      for (int i = 0; i < n; i++) {
         int left = i + 1, right = n - i;
         int left_even = (left + 1) / 2, right_even = (right + 1) / 2;
         int left_odd = left / 2, right_odd = right / 2;
         sum += (left_even * right_even + left_odd * right_odd) * arr[i];
      }
      return sum;
   }
};