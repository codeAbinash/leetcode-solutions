// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
using namespace std;


class Solution {
public:
   bool isSubsequence(string s, string t) {
      int i = 0, j = 0;
      int s_len = s.length(), t_len = t.length();

      while (i < s_len && j < t_len)
         (s[i] == t[j++]) && i++;

      return i == s_len;
   }
};