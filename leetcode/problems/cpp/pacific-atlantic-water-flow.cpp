// by @codeAbinash

#include "vector"
using namespace std;

class Solution {
   int m, n;
   void dfs(vector<vector<int>>& h, vector<vector<bool>>& visited, int i, int j) {
      visited[i][j] = true;
      if (i + 1 < m && !visited[i + 1][j] && h[i + 1][j] >= h[i][j])
         dfs(h, visited, i + 1, j);
      if (i - 1 >= 0 && !visited[i - 1][j] && h[i - 1][j] >= h[i][j])
         dfs(h, visited, i - 1, j);
      if (j + 1 < n && !visited[i][j + 1] && h[i][j + 1] >= h[i][j])
         dfs(h, visited, i, j + 1);
      if (j - 1 >= 0 && !visited[i][j - 1] && h[i][j - 1] >= h[i][j])
         dfs(h, visited, i, j - 1);
   }
public:

   vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
      vector<vector<int>>ans;
      m = heights.size();
      n = heights[0].size();

      vector<vector<bool>> pacific(m, vector<bool>(n));
      vector<vector<bool>> atlantic(m, vector<bool>(n));

      for (int i = 0; i < m; i++) {
         dfs(heights, pacific, i, 0);
         dfs(heights, atlantic, i, n - 1);
      }

      for (int j = 0; j < n; j++) {
         dfs(heights, pacific, 0, j);
         dfs(heights, atlantic, m - 1, j);
      }

      for (int i = 0; i < m; i++)
         for (int j = 0; j < n; j++)
            if (pacific[i][j] && atlantic[i][j])
               ans.push_back({ i,j });
      return ans;
   }
};