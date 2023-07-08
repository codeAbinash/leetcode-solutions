// by @codeAntu
// time complexity: O(n)
// space complexity: O(1)

class Solution {
public:
   int lengthOfLastWord(string s) {
      int max = 0;
      int count = 0;
      for (int i = s.length() - 1; i >= 0; i--){
         if (s[i] == ' ' && count == 0){
            continue;
         }
         if (s[i] == ' ')
            return count;
         count++;
      }
      return count;
   }
};