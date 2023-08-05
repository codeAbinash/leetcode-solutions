// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
   void dfs(vector<vector<char>>& grid, int i, int j, int m, int n) {
      if (grid[i][j] != '1') return;
      grid[i][j] = '*';
      if (i + 1 < m) dfs(grid, i + 1, j, m, n);
      if (i - 1 >= 0) dfs(grid, i - 1, j, m, n);
      if (j - 1 >= 0) dfs(grid, i, j - 1, m, n);
      if (j + 1 < n) dfs(grid, i, j + 1, m, n);
   }
public:
   int numIslands(vector<vector<char>>& grid) {
      int count = 0;
      int m = grid.size();
      int n = grid[0].size();

      for (int i = 0; i < m; i++)
         for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
               dfs(grid, i, j, m, n);
               count++;
            }
         }
      return count;
   }
};