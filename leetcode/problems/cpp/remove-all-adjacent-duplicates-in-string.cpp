// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
using namespace std;

class Solution {
  public:
   string removeDuplicates(string s) {
      string res;
      for (char c : s) {
         if (res.empty() || res.back() != c)
            res.push_back(c);
         else
            res.pop_back();
      }
      return res;
   }
};
