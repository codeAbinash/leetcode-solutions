// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "string"
using namespace std;

class Solution {
public:
   int romanToInt(string s) {
      int ans = 0;
      char lastChar = 0;
      for (auto ch : s) {
         switch (ch) {
         case 'M':
            ans += (lastChar == 'C') ? 800 : 1000;break;
         case 'D':
            ans += (lastChar == 'C') ? 300 : 500;break;
         case 'C':
            ans += (lastChar == 'X') ? 80 : 100;break;
         case 'L':
            ans += (lastChar == 'X') ? 30 : 50;break;
         case 'X':
            ans += (lastChar == 'I') ? 8 : 10;break;
         case 'V':
            ans += (lastChar == 'I') ? 3 : 5;break;
         case 'I':
            ans++;break;
         }
         lastChar = ch;
      }
      return ans;
   }
};

