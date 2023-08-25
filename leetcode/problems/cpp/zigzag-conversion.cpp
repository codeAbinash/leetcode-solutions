// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
public:
   string convert(string s, int numRows) {
      if (numRows == 1) return s;
      string res = "";
      int len = s.length();
      int interval = 2 * numRows - 2;
      for (int i = 0; i < numRows; i++)
         for (int j = i; j < len; j += interval) {
            res.push_back(s[j]);
            int tmp = j + interval - 2 * i;
            if (i != 0 && i != numRows - 1 && tmp < len)
               res.push_back(s[tmp]);
         }
      return res;
   }
};