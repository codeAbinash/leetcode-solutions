// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
 public:
   int minOperations(string s) {
      int n = s.size();
      int cnt1 = 0;
      for (int i = 0; i < n; i++)
         if ((s[i] - '0') ^ (i & 1)) cnt1++;
      return min(cnt1, n - cnt1);
   }
};
