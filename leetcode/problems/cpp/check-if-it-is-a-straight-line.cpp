// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;


class Solution {
public:
   bool checkStraightLine(vector<vector<int>>& coordinates) {
      int dx = coordinates[1][0] - coordinates[0][0],
         dy = coordinates[1][1] - coordinates[0][1];

      size_t size = coordinates.size();

      for (size_t i = 2; i < size; i++) {
         int c_dy = coordinates[i][1] - coordinates[i - 1][1];
         int c_dx = coordinates[i][0] - coordinates[i - 1][0];
         if (dy * c_dx != dx * c_dy) return false;
      }
      return true;
   }
};