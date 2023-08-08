// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
using namespace std;

class Solution {
public:
   bool isAnagram(string s, string t) {
      int s_len = s.length();
      int t_len = t.length();

      if (s_len != t_len) return false;

      int hash[26] = { 0 };
      for (int i = 0; i < s_len; i++) {
         hash[s[i] - 'a']++;
         hash[t[i] - 'a']--;
      }
      // Check if all the elements in the hash are 0
      for (int i = 0; i < 26; i++)
         if (hash[i] != 0) return false;
      return true;
   }
};