// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include <vector>
using namespace std;

class Solution {
 public:
   vector<int> evenOddBit(int n) {
      vector<int> ans(2, 0);
      int i = 0;
      while (n) {
         ans[i] += n & 1;
         n >>= 1;
         i ^= 1;
      }
      return ans;
   }
};