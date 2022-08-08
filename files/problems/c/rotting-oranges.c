int infectable(int r, int c, int rows, int cols, int** grid) {
    if (r > 0 && grid[r - 1][c] == 2) return 1;
    if (c > 0 && grid[r][c - 1] == 2) return 1;
    if (r < rows - 1 && grid[r + 1][c] == 2) return 1;
    if (c < cols - 1 && grid[r][c + 1] == 2) return 1;
    return 0;
}

int orangesRotting(int** grid, int gridSize, int* gridColSize) {
    int isChangedMatrix;
    int count = 0;
    int once;
    do {
        isChangedMatrix = 0;
        once = 0;
        for (int i = 0; i < gridSize; i++)
            for (int j = 0; j < gridColSize[i]; j++)
                if (grid[i][j] == 1)
                    if (infectable(i, j, gridSize, gridColSize[i], grid)) {
                        grid[i][j] = -1;
                        isChangedMatrix = 1;
                    } 
                    else
                        once = 1;

        if (isChangedMatrix) {
            count++;
            for (int i = 0; i < gridSize; i++)
                for (int j = 0; j < gridColSize[i]; j++)
                    if (grid[i][j] == -1) grid[i][j] = 2;
        }

    } while (isChangedMatrix);

    return (once) ? -1 : count;
}