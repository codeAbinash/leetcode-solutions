int uniquePaths(int m, int n) {
    int row[n], newRow[n];
    int i, j;
    for (i = 0; i < n; i++) row[i] = 1;

    for (i = 0; i < m - 1; i++) {
        for (j = 0; j < n; j++) newRow[j] = 1;
        for (j = n - 2; j >= 0; j--)
            row[j] = newRow[j] = newRow[j + 1] + row[j];
    }
    return row[0];
}