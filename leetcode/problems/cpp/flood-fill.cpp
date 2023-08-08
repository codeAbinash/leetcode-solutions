// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
using namespace std;

class Solution {
   int m, n, oldColor, newColor;
   void dfs(vector<vector<int>>& image, int i, int j) {
      if (image[i][j] != oldColor)
         return;
      image[i][j] = newColor;

      if (i - 1 >= 0) dfs(image, i - 1, j);
      if (i + 1 < m) dfs(image, i + 1, j);
      if (j - 1 >= 0) dfs(image, i, j - 1);
      if (j + 1 < n) dfs(image, i, j + 1);
   }

public:
   vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      oldColor = image[sr][sc];
      newColor = color;
      m = image.size();
      n = image[0].size();
      if (oldColor != color)
         dfs(image, sr, sc);
      return image;
   }
};