// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
#include "string"
using namespace std;

class Solution {
  public:
   string smallestNumber(string pattern) {
      int n = pattern.size(), j = 0;
      string ans = "";
      for (int i = 0; i <= n; i++) {
         ans += to_string(i + 1);
         if (i == n || pattern[i] == 'I') {
            reverse(ans.begin() + j, ans.end());
            j = i + 1;
         }
      }
      return ans;
   }
};
