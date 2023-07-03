// by @codeAbinash

class Solution {
   public:
    int calculate(vector<vector<int>>& grid, int i, int j) {
        if (i >= grid.size() || j >= grid[0].size() || i < 0 || j < 0 || grid[i][j] == 0) return 1;
        if (grid[i][j] == -1) return 0;
        grid[i][j] = -1;
        return calculate(grid, i + 1, j) + calculate(grid, i, j + 1) + calculate(grid, i - 1, j) + calculate(grid, i, j - 1);
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int result = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                if (grid[i][j]) result += calculate(grid, i, j);
        return result;
    }
};