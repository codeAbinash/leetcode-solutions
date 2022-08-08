class Solution {
   public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = size(mat), col = size(mat[0]);
        int cells = row * col;

        if (r * c != cells || r == row) return mat;
        vector<vector<int>> answer(r, vector<int>(c));
        for (int i = 0; i < cells; i++)
            answer[i / c][i % c] = mat[i / col][i % col];
        return answer;
    }
};