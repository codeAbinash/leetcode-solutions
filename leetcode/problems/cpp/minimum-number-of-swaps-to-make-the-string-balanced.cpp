// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
  public:
   int minSwaps(string s) {
      int n = s.size(), ans = 0, cnt = 0;
      for (char c : s) {
         if (c == '[')
            cnt++;
         else {
            if (cnt == 0)
               ans++;
            else
               cnt--;
         }
      }
      return (ans + 1) / 2;
   }
};
