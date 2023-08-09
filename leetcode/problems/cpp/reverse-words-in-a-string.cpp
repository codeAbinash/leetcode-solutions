// by @codeAbinash

#include "vector"
#include "string"
#include "stack"
#include "algorithm"

using namespace std;


// Using Stack
// Space : O(n)
// Time : O(n)

class Solution {
   void empty_stack(stack<char>& stk, string& ans) {
      while (!stk.empty()) {
         ans.push_back(stk.top());
         stk.pop();
      }
   }
public:
   string reverseWords(string s) {
      stack<char> stk;
      string ans = "";
      int len = s.length();
      for (int i = len - 1; i >= 0; i--) {
         if (s[i] == ' ') {
            if (stk.empty()) continue;
            else {
               empty_stack(stk, ans);
               ans.push_back(' ');
            }
         } else
            stk.push(s[i]);
      }
      empty_stack(stk, ans);

      // Check if the last element is ' '
      if (*(ans.end() - 1) == ' ')
         ans.pop_back();

      return ans;
   }
};



// In place
// Time O(n)
// Space O(1)

class Solution {
   void join(int a, int b, string& ans, string& s) {
      for (int i = a; i < b; i++)
         ans.push_back(s[i]);
   }
public:
   string reverseWords(string s) {
      string ans = "";
      int len = s.length();
      int a = len - 1;

      while (a >= 0) {
         while (a >= 0 && s[a] == ' ') a--;
         if (a < 0) break;
         int b = a;
         while (b >= 0 && s[b] != ' ') b--;
         join(b + 1, a + 1, ans, s);
         ans.push_back(' ');
         a = b - 1;
      }

      join(0, a, ans, s);
      if (*(ans.end() - 1) == ' ')
         ans.pop_back();
      return ans;
   }
};


// Reversing the whole string and then reversing each word
// Fastest
// Time : O(n)
// Space : O(1)

class Solution {
public:
   string reverseWords(string s) {
      reverse(s.begin(), s.end());
      int a = 0, b = 0, i = 0, len = s.size();
      while (i < len) {
         while (i < len && s[i] != ' ')
            s[b++] = s[i++];

         if (a < b) {
            reverse(s.begin() + a, s.begin() + b);
            if (b == len) break;
            s[b++] = ' ';
            a = b;
         }
         i++;
      }

      if (b > 0 && s[b - 1] == ' ')
         b--;

      s.resize(b);
      return s;
   }
};