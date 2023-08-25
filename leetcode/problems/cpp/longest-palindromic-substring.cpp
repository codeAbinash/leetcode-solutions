// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
using namespace std;

class Solution {
public:
   string longestPalindrome(string s) {
      int len = s.length();
      int left, right, maxLen = 0, maxLeft, maxRight;

      for (int i = 0; i < len; i++) {
         // For odd length palindromes
         left = i, right = i;
         while (left >= 0 && right < len && s[left] == s[right])
            left--, right++;

         if (right - left - 1 > maxLen) {
            maxLen = right - left - 1;
            maxLeft = left + 1;
            maxRight = right - 1;
         }
         // For even length palindromes
         left = i, right = i + 1;
         while (left >= 0 && right < len && s[left] == s[right])
            left--, right++;

         if (right - left - 1 > maxLen) {
            maxLen = right - left - 1;
            maxLeft = left + 1;
            maxRight = right - 1;
         }
      }
      return s.substr(maxLeft, maxRight - maxLeft + 1);
   }
};