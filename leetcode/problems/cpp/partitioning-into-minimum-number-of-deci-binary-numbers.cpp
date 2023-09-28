// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "algorithm"
using namespace std;

class Solution {
public:
   int minPartitions(string n) {
      int ans = 0;
      for (auto ch : n)
         ans = max(ans, ch - '0');
      return ans;
   }
};
