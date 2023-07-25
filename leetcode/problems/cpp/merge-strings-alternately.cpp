// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   string mergeAlternately(string word1, string word2) {
      string ans = "";
      int i = 0, l1 = word1.length(), l2 = word2.length();
      while (i < l1 || i < l2) {
         if (i < l1) ans += word1[i];
         if (i < l2) ans += word2[i];
         i++;
      }
      return ans;
   }
};