// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
using namespace std;

class Solution {
public:
   vector<int> countBits(int n) {
      vector<int> ans(n + 1);
      ans[0] = 0;
      for (int i = 0; i <= n; i++)
         ans[i] = ans[i / 2] + i % 2;
      return ans;
   }
};