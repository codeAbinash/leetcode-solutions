// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
public:
   int strStr(string haystack, string needle) {
      int m = haystack.size(), n = needle.size();
      if (n == 0) return 0;
      for (int i = 0; i <= m - n; i++) {
         int j;
         for (j = 0; j < n; j++)
            if (haystack[i + j] != needle[j]) break;
         if (j == n) return i;
      }
      return -1;
   }
};