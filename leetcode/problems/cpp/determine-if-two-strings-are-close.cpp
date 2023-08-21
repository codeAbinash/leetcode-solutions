// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
#include "algorithm"
using namespace std;

class Solution {
public:
   bool closeStrings(string word1, string word2) {
      vector<int> w1(26, 0), w2(26, 0);
      vector<bool> w3(26, false), w4(26, false);

      for (auto ch : word1) w1[ch - 'a']++, w3[ch - 'a'] = true;
      for (auto ch : word2) w2[ch - 'a']++, w4[ch - 'a'] = true;
      // O(n), depends on word length 

      sort(w1.begin(), w1.end());
      sort(w2.begin(), w2.end());
      // O(1), because size  is 26 

      return w1 == w2 && w3 == w4;
   }
};