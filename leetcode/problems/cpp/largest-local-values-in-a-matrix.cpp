#include "vector"

class Solution {
 public:
   vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
      int n = grid.size();

      for (int i = 1; i < n - 1; ++i) {
         for (int j = 1; j < n - 1; ++j) {
            int temp = 0;

            for (int k = i - 1; k <= i + 1; ++k) {
               for (int l = j - 1; l <= j + 1; ++l) {
                  temp = max(temp, grid[k][l]);
               }
            }

            grid[i - 1][j - 1] = temp;
         }
      }

      // resizing
      grid.resize(n - 2);
      for (int i = 0; i < grid.size(); ++i) {
         grid[i].resize(n - 2);
      }

      return grid;
   }
};