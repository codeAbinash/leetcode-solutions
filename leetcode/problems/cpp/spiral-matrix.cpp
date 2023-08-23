// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;
class Solution {
public:
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n = matrix.size();
      int m = matrix[0].size();
      int left = 0, right = m - 1;
      int top = 0, bottom = n - 1;
      vector<int> ans;

      while (top <= bottom && left <= right) {
         // right is performed
         for (int i = left;i <= right;i++)
            ans.push_back(matrix[top][i]);
         top++;

         //bottom is performed
         for (int i = top;i <= bottom;i++)
            ans.push_back(matrix[i][right]);

         right--;

         // left is performed
         if (top <= bottom) {
            for (int i = right;i >= left;i--) {
               ans.push_back(matrix[bottom][i]);
            }
            bottom--;
         }

         // top is performed
         if (left <= right) {
            for (int i = bottom;i >= top;i--) {
               ans.push_back(matrix[i][left]);
            }
            left++;
         }

      }
      return ans;

   }
};