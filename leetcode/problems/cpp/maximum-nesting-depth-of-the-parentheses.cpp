// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
using namespace std;

class Solution {
  public:
   int maxDepth(string s) {
      int max = 0, count = 0;
      int len = s.length();
      for (int i = 0; i < len; i++) {
         if (s[i] == '(') {
            count++;
            if (count > max) max = count;
         } else if (s[i] == ')')
            count--;
      }
      return max;
   }
};
