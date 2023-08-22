// // by @codeAbinash
#include "vector"
#include "string"
#include "stack"
#include "algorithm"
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)
class Solution {
public:
   string removeStars(string s) {
      string f;
      for (auto& ch : s) {
         if (ch == '*')
            f.pop_back();
         else
            f.push_back(ch);
      }
      return f;
   }
};

// Time : O(n)
// Space : O(n)
class Solution {
public:
   string removeStars(string s) {
      stack<char> stk;

      for (auto ch : s) {
         if (ch == '*')
            stk.pop();
         else
            stk.push(ch);
      }

      string result;

      while (!stk.empty()) {
         result.push_back(stk.top());
         stk.pop();
      }

      reverse(result.begin(), result.end());
      return result;
   }
};

// Better way, using two pointers
// Time : O(n)
// Space : O(1)
class Solution {
public:
   string removeStars(string s) {
      int i = 0, j = 0;
      int len = s.length();

      for (int i = 0; i < len; i++) {
         if (s[i] == '*') j--;
         else s[j++] = s[i];
      }

      return s.substr(0, j);
   }
};