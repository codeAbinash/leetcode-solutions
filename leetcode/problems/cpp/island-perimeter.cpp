#include "vector"
using namespace std;

// by @codeAbinash
// Time : O(n)
// Space : O(1)

class Solution {
   void dfs(vector<vector<int>>& grid, int i, int j, int& perimeter) {
      if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) {
         perimeter++; return;
      }
      if (grid[i][j] == -1) return;

      grid[i][j] = -1;

      dfs(grid, i + 1, j, perimeter);
      dfs(grid, i - 1, j, perimeter);
      dfs(grid, i, j + 1, perimeter);
      dfs(grid, i, j - 1, perimeter);
   }

public:
   int islandPerimeter(vector<vector<int>>& grid) {
      int perimeter = 0;
      int row = grid.size();
      int col = grid[0].size();

      for (int i = 0; i < row; i++)
         for (int j = 0; j < col; j++)
            if (grid[i][j] == 1) {
               dfs(grid, i, j, perimeter);
               return perimeter;
            }

      return perimeter;
   }
};


// by @codeAbinash
// Time : O(n^2)
// Space : O(1)
// Without using recursion, Faster
class Solution {
public:
   int islandPerimeter(vector<vector<int>>& grid) {
      int perimeter = 0;
      for (int i = 0; i < grid.size(); ++i)
         for (int j = 0; j < grid[0].size(); ++j)
            if (grid[i][j] == 1) {
               perimeter += 4;
               if (i > 0 && grid[i - 1][j] == 1)
                  perimeter -= 2;
               if (j > 0 && grid[i][j - 1] == 1)
                  perimeter -= 2;
            }
      return perimeter;
   }
};