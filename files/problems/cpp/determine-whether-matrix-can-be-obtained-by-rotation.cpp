// by @codeAbinash
// Time Complexity : O(n^2)
// Space Complexity : O(1)
class Solution {
   public:
    void rotate(vector<vector<int>>& matrix) {
        int rowLen = matrix[0].size();
        int colLen = matrix.size();
        // Transpose the matrix
        for (int i = 0; i < colLen - 1; i++)
            for (int j = i + 1; j < rowLen; j++)
                swap(matrix[i][j], matrix[j][i]);
        // Reverse each row of the matrix
        for (int i = 0; i < colLen; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // Rotate 3 times
        if (mat == target) return true;
        for (int i = 1; i <= 3; i++) {
            rotate(mat);
            if (mat == target) return true;
        }
        return false;
    }
};