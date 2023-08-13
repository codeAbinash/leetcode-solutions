// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
   bool inline isVowel(char ch) {
      return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
   }
public:
   int maxVowels(string s, int k) {
      int len = s.length();
      int vowels = 0, maxVowels;

      for (int i = 0; i < k; i++)
         if (isVowel(s[i])) vowels++;

      maxVowels = vowels;

      for (int i = k; i < len; i++) {
         if (isVowel(s[i])) vowels++;
         if (isVowel(s[i - k])) vowels--;
         if (vowels > maxVowels) maxVowels = vowels;
      }

      return maxVowels;
   }
};