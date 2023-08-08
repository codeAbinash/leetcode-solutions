class Solution {
public:
   int diagonalSum(vector<vector<int>>& mat) {
      int n = mat.size(), sum = 0;
      int mid = n >> 1;

      for (int i = 0; i < n; i++) {
         sum += mat[i][i];
         sum += mat[n - i - 1][i];
      }
      
      if (n & 1) sum -= mat[mid][mid];
      return sum;
   }
};

int diagonalSum(int** mat, int matSize, int* matColSize){
   int sum = 0, mid = matSize >> 1;

   for (int i = 0; i < matSize; i++) {
      sum += mat[i][i];
      sum += mat[matSize - i - 1][i];
   }

   if (matSize & 1) sum -= mat[mid][mid];
   return sum;
}