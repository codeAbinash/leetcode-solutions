// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   char findTheDifference(string s, string t) {
      int len = s.length();
      int x = 0, index;
      for (index = 0; index < len; index++) {
         x ^= s[index];
         x ^= t[index];
      }
      x ^= t[index];

      return x;
   }
};