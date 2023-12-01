// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
  public:
   bool isIsomorphic(string s, string t) {
      if (s.size() != t.size()) return false;

      char s_map[256] = {0};
      char t_map[256] = {0};

      for (int i = 0; i < s.size(); i++) {
         if (s_map[s[i]] != t_map[t[i]]) return false;
         s_map[s[i]] = i + 1;
         t_map[t[i]] = i + 1;
      }

      return true;
   }
};
