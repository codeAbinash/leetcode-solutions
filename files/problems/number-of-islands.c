void dfs(char** grid, int row, int col, int i, int j) {
    if (i >= row || i < 0 || j >= col || j < 0) return;
    if (grid[i][j] != '1') return;
    grid[i][j] = '*';

    dfs(grid, row, col, i + 1, j);
    dfs(grid, row, col, i - 1, j);
    dfs(grid, row, col, i, j + 1);
    dfs(grid, row, col, i, j - 1);
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int count = 0;

    for(int i = 0 ; i <gridSize; i++)
        for(int j= 0; j < gridColSize[0]; j++)
            if(grid[i][j] == '1'){
                dfs(grid, gridSize, gridColSize[0], i, j);
                count++;
            }
    return count;
}