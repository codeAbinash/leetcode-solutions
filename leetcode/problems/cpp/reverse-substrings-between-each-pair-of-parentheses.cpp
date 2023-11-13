// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
#include "stack"
#include "string"
using namespace std;

class Solution {
  public:
   string reverseParentheses(string s) {
      stack<int> st;
      for (int i = 0; i < s.size(); i++) {
         if (s[i] == '(')
            st.push(i);
         else if (s[i] == ')') {
            int j = st.top();
            st.pop();
            reverse(s.begin() + j, s.begin() + i);
         }
      }
      string ans = "";
      for (int i = 0; i < s.size(); i++)
         if (s[i] != '(' && s[i] != ')')
            ans += s[i];

      return ans;
   }
};
