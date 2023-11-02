// by @codeAbinash

#include "algorithm"
#include "string"
#include "vector"
using namespace std;

// Time Complexity O(n)
// Space Complexity O(1)

inline int isAlpha(char c) {
   return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

inline char toLowerCase(char c) {
   if (c >= 'A' && c <= 'Z')
      return c + 'a' - 'A';
   else
      return c;
}
class Solution {
  public:
   bool isPalindrome(string s) {
      int i = 0, j = s.size() - 1;
      while (i < j) {
         if (!isAlpha(s[i])) {
            i++;
            continue;
         }
         if (!isAlpha(s[j])) {
            j--;
            continue;
         }
         if (toLowerCase(s[i]) != toLowerCase(s[j]))
            return false;
         i++;
         j--;
      }
      return true;
   }
};

// Another Solution
// Time Complexity O(n)
// Space Complexity O(n)
class Solution {
  public:
   bool isPalindrome(string s) {
      int n = s.size();
      if (n == 1) return true;
      string str = "";

      for (int i = 0; i < n; i++)
         if (isalnum(s[i])) str += s[i];

      transform(str.begin(), str.end(), str.begin(), ::tolower);

      int i = 0, j = str.size() - 1;

      while (i < j) {
         if (str[i] != str[j]) return false;
         i++, j--;
      }
      return true;
   }
};
