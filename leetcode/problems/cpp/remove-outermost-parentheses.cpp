// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "string"
using namespace std;

class Solution {
  public:
   string removeOuterParentheses(string s) {
      stack<char> st;
      string res = "";
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '(') {
            if (!st.empty()) res += s[i];
            st.push(s[i]);
         } else {
            st.pop();
            if (!st.empty()) res += s[i];
         }
      }
      return res;
   }
};

// Better solution

class Solution {
  public:
   string removeOuterParentheses(string s) {
      int open = 0, close = 0;
      int j = 0;
      string ans = "";
      for (int i = 0; i < s.size(); i++) {
         if (s[i] == '(') open++;
         else if (s[i] == ')') close++;
         if (open == close) {
            int k = j + 1;
            while (k < i) {
               ans += s[k];
               k++;
            }
            j = i + 1;
         }
      }
      return ans;
   }
};
