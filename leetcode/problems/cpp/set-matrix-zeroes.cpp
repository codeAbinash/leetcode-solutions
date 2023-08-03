// by @codeAbinash

#include "vector"
using namespace std;

class Solution {
public:
   void setZeroes(vector<vector<int>>& matrix) {
      int row = matrix.size();
      int col = matrix[0].size();
      bool isRowZero = false;

      // Check each element and set the first row and col to 0
      for (int i = 0; i < row; i++)
         for (int j = 0; j < col; j++)
            if (matrix[i][j] == 0) {
               matrix[0][j] = 0;
               if (i > 0)
                  matrix[i][0] = 0;
               else
                  isRowZero = true;
            }
      // Set Zero
      for (int i = 1; i < row; i++)
         for (int j = 1; j < col; j++)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
               matrix[i][j] = 0;

      if (matrix[0][0] == 0)
         for (int i = 0; i < row; i++)
            matrix[i][0] = 0;

      if (isRowZero)
         for (int j = 0; j < col; j++)
            matrix[0][j] = 0;
   }
};