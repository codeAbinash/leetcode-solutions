// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
#include "unordered_set"
using namespace std;

class Solution {
public:
   int numJewelsInStones(string jewels, string stones) {
      int count = 0;
      unordered_set<char> s;
      for (auto ch : jewels)
         s.insert(ch);
      for (auto ch : stones)
         if (s.find(ch) != s.end())
            count++;
      return count;
   }
};
