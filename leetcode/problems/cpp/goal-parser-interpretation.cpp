// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
public:
   string interpret(string command) {
      string ans = "";
      int len = command.length(), i;
      for (i = 0; i < len; i++) {
         if (command[i] == '(') {
            if (command[i + 1] == 'a') {
               ans += "al";
               i += 3;
            } else {
               ans.push_back('o');
               i++;
            }
         } else ans.push_back('G');
      }
      return ans;
   }
};