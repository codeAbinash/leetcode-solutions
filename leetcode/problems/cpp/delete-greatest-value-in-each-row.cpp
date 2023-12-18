// by @codeAbinash
// Time : O(nlogn)
// Space : O(1)

#include "algorithm"
#include "vector"
using namespace std;

class Solution {
 public:
   int deleteGreatestValue(vector<vector<int>>& grid) {
      int res = 0, r = grid.size(), c = grid[0].size();
      for (auto& row : grid) 
         sort(begin(row), end(row));
      for (int j = 0; j < c; ++j) {
         int max_row = 0;
         for (int i = 0; i < r; ++i)
            max_row = max(max_row, grid[i][j]);
         res += max_row;
      }
      return res;
   }
};
