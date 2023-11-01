// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
#include "unordered_map"
using namespace std;

class Solution {
  public:
   int firstUniqChar(string s) {
      unordered_map<char, int> m;
      for (auto c : s)
         m[c]++;
      for (int i = 0; i < s.size(); i++)
         if (m[s[i]] == 1)
            return i;
      return -1;
   }
};
