// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "string"
using namespace std;

class Solution {
  public:
   int minLength(string s) {
      stack<char> stk;
      for (char ch : s) {
         if (ch == 'B' && stk.size() && stk.top() == 'A')
            stk.pop();
         else if (ch == 'D' && stk.size() && stk.top() == 'C')
            stk.pop();
         else
            stk.push(ch);
      }
      return stk.size();
   }
};
