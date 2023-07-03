int landArea(int** grid, int r, int c, int row, int col) {
    if(r < 0 || r>= row) return 0;
    if(c < 0 || c>= col) return 0;
    if(grid[r][c] == 0) return 0;

    grid[r][c] = 0;
    int count = 1;

    count += landArea(grid, r + 1, c, row, col);
    count += landArea(grid, r - 1, c, row, col);
    count += landArea(grid, r, c + 1, row, col);
    count += landArea(grid, r, c - 1, row, col);
    return count;
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize) {
    int count = 0, i, j, max = -1;

    for (i = 0; i < gridSize; i++)
        for (j = 0; j < gridColSize[0]; j++) {
            count = landArea(grid, i, j, gridSize, gridColSize[0]);
            if (count > max) max = count;
        }
    return max;
}













int visit(int** grid, int gridSize, int gridColSize, int i, int j) {
    if (i < 0 || i >= gridSize) return 0;
    if (j < 0 || j >= gridColSize) return 0;
    if (grid[i][j] == 0) return 0;

    grid[i][j] = 0;
    int cnt = 1;
    cnt += visit(grid, gridSize, gridColSize, i + 1, j);
    cnt += visit(grid, gridSize, gridColSize, i - 1, j);
    cnt += visit(grid, gridSize, gridColSize, i, j + 1);
    cnt += visit(grid, gridSize, gridColSize, i, j - 1);
    return cnt;
}

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int maxAreaOfIsland2(int** grid, int gridSize, int* gridColSize) {
    int i, j;
    int largest = -1;

    for (i = 0; i < gridSize; i++) {
        for (j = 0; j < gridColSize[0]; j++) {
            int c = visit(grid, gridSize, gridColSize[0], i, j);
            largest = MAX(largest, c);
        }
    }

    return largest;
}
int main() { return 0; }