// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "string"
using namespace std;

class Solution {
  public:
   bool backspaceCompare(string s, string t) {
      stack<char> s1, s2;

      for (char c : s) {
         if (c == '#') {
            if (!s1.empty()) s1.pop();
         } else
            s1.push(c);
      }

      for (char c : t) {
         if (c == '#') {
            if (!s2.empty()) s2.pop();
         } else
            s2.push(c);
      }

      while (!s1.empty() && !s2.empty()) {
         if (s1.top() != s2.top()) return false;
         s1.pop();
         s2.pop();
      }

      return s1.empty() && s2.empty();
   }
};

// by @codeAbinash
// Time : O(n)
// Space : O(1)

class Solution {
  public:
   bool backspaceCompare(string s, string t) {
      int i = s.length() - 1;
      int j = t.length() - 1;
      int check_s = 0;
      int check_t = 0;

      while (i >= 0 || j >= 0) {
         while (i >= 0 && (s[i] == '#' || check_s > 0)) {
            if (s[i] == '#')
               check_s++;
            else
               check_s--;
            i--;
         }
         while (j >= 0 && (t[j] == '#' || check_t > 0)) {
            if (t[j] == '#')
               check_t++;
            else
               check_t--;
            j--;
         }
         if (i >= 0 && j >= 0) {
            if (s[i] != t[j]) return false;
         } else if (i >= 0 || j >= 0)
            return false;
         i--;
         j--;
      }
      return true;
   }
};
