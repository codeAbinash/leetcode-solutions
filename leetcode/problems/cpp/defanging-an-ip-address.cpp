// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
using namespace std;

class Solution {
public:
   string defangIPaddr(string address) {
      string ans;
      int len = address.size();
      for (int i = 0; i < len; i++) {
         if (address[i] == '.')
            ans.push_back('['), ans.push_back('.'), ans.push_back(']');
         else
            ans.push_back(address[i]);
      }
      return ans;
   }
};
