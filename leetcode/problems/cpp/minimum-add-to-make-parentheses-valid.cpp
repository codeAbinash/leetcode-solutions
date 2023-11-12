// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "string"
using namespace std;

class Solution {
  public:
   int minAddToMakeValid(string s) {
      stack<char> st;
      int count = 0;
      for (char c : s) {
         if (c == '(')
            st.push(c);
         else {
            if (st.empty())
               count++;
            else
               st.pop();
         }
      }
      return count + st.size();
   }
};

// by @codeAbinash
// Time : O(n)
// Space : O(1)
class Solution {
  public:
   int minAddToMakeValid(string s) {
      int opens = 0, closes = 0;
      for (char c : s) {
         if (c == '(')
            opens++;
         else {
            if (opens > 0)
               opens--;
            else
               closes++;
         }
      }
      return opens + closes;
   }
};
