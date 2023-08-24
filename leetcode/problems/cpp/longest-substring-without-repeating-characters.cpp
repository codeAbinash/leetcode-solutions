// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
using namespace std;

class Solution {
public:
   int lengthOfLongestSubstring(string s) {
      bool set[128] = { false };
      int maxLen = 0, len = s.length(), left = 0;

      for (int i = 0; i < len; i++) {
         while (set[s[i]])
            set[s[left]] = false, left++;

         set[s[i]] = true;
         maxLen = max(maxLen, i - left + 1);
      }
      return maxLen;
   }
};

