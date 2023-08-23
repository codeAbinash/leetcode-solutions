// by @codeAbinash

#include "vector"
#include "iostream"
using namespace std;

class Solution {
public:
   int compress(vector<char>& chars) {
      int len = chars.size();
      if (len == 1) return 1;
      int i = 0, j = 0, k = 0;
      while (i < len) {
         while (j < len && chars[i] == chars[j]) j++;
         chars[k++] = chars[i];
         if (j - i > 1) {
            string s = to_string(j - i);
            for (auto c : s) chars[k++] = c;
         }
         i = j;
      }
      return k;
   }
};
