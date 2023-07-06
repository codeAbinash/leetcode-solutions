// by @codeAntu
// time complexity: O(n)
// space complexity: O(n)

class Solution {
public:
   bool isValid(string s) {
      stack<char> stk;
      for (int i = 0; i < s.length(); i++)
      {
         if (s[i] == '(' || s[i] == '{' || s[i] == '[')
         {
            stk.push(s[i]);
         } else if (!stk.empty()) {
            if (match(stk.top(), s[i]))) {
               stk.pop();
            } else
               return false;
         } else
            return false;

      }
      return stk.empty();
   }

   bool match(char a, char b) {
      if (a == '(' && b == ')')
         return true;
      else if (a == '{' && b == '}')
         return true;
      else if (a == '[' && b == ']')
         return true;
      else
         return false;
   }
};
