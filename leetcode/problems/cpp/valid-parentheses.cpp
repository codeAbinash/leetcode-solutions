#include "stack"
#include "string"
#include "vector"
using namespace std;

// by @codeAntu
// time complexity: O(n)
// space complexity: O(n)

class Solution {
   inline bool match(char a, char b) {
      return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']');
   }

  public:
   bool isValid(string s) {
      stack<char> stk;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stk.push(s[i]);
         else if (!stk.empty() && match(stk.top(), s[i]))
            stk.pop();
         else
            return false;
      }
      return stk.empty();
   }
};
