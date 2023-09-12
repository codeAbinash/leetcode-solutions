// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    int map[127] = { false };
    for (auto ch : magazine)
      map[ch]++;
    for (auto ch : ransomNote) {
      map[ch]--;
      if (map[ch] < 0)
        return false;
    }
    return true;
  }
};
