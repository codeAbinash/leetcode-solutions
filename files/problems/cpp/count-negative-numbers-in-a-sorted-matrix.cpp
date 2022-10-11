// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int count = 0;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                if (grid[i][j] < 0) {
                    count += col - j;
                    break;
                }

        return count;
    }
};