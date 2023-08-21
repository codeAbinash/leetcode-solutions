// by @codeAbinash

#include "vector"
#include "map"
using namespace std;

// Faster
class Solution {
public:
   int equalPairs(vector<vector<int>>& grid) {
      int count = 0;
      map<vector<int>, int>mp;

      int r = grid.size();
      int c = grid[0].size();


      for (auto& row : grid)
         mp[row]++;

      for (int i = 0; i < c; i++) {
         vector<int> v;
         for (int j = 0;j < r;j++)
            v.push_back(grid[j][i]);
         count += mp[v];
      }
      return count;
   }
};


// Memory Efficient
class Solution {
public:
   int equalPairs(vector<vector<int>>& grid) {
      int returnValue = 0;
      int n = grid.size();
      for (int i = 0; i < n; ++i)
         for (int j = 0; j < n; ++j)
            for (int k = 0; k < n; ++k) {
               if (grid[i][k] != grid[k][j])
                  break;
               if (k == n - 1)
                  returnValue++;
            }
      return returnValue;
   }
};