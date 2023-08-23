// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   int maximumWealth(vector<vector<int>>& accounts) {
      int richest = 0,
         r = accounts.size(),
         c = accounts[0].size();

      for (int i = 0; i < r; i++) {
         int tmp = 0;
         for (int j = 0; j < c; j++)
            tmp += accounts[i][j];
         richest = max(richest, tmp);
      }
      return richest;
   }
};