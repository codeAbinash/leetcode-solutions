#include "stack"
#include "string"
using namespace std;

// by @codeAbinash
// Time : O(n)
// Space : O(n)
class Solution {
  public:
   int scoreOfParentheses(string s) {
      stack<int> st;
      int score = 0;

      for (auto c : s) {
         if (c == '(') {
            st.push(score);
            score = 0;
         } else {
            score = st.top() + max(2 * score, 1);
            st.pop();
         }
      }
      return score;
   }
};

// by @codeAbinash
// Time : O(n)
// Space : O(1)
class Solution {
  public:
   int scoreOfParentheses(string s) {
      int score = 0, depth = 0;
      char prev = '(';

      for (auto c : s) {
         if (c == '(')
            depth++;
         else {
            depth--;
            if (prev == '(') score += 1 << depth;
         }
         prev = c;
      }
      return score;
   }
};
