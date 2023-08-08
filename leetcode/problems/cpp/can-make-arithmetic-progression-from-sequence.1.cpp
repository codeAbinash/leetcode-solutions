// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "algorithm"
using namespace std;


class Solution {
public:
   bool canMakeArithmeticProgression(vector<int>& arr) {
      sort(arr.begin(), arr.end());
      int diff = arr[1] - arr[0];
      int arrSize = arr.size();
      for (int i = 2; i < arrSize; i++) {
         if (arr[i] - arr[i - 1] != diff) {
            return false;
         }
      }
      return true;
   }
};