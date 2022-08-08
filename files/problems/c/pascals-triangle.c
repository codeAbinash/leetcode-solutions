int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int **triangle, i, j;
    *returnSize = numRows;
    *returnColumnSizes = (int**)malloc(sizeof(int*) * numRows);
    
    for (int i = 0; i < numRows; i++) 
        (*returnColumnSizes)[i] = i + 1;

    triangle = (int**)malloc(sizeof(int*) * numRows);

    for (int i = 0; i < numRows; i++) {
        triangle[i] = malloc(sizeof(int) * (i + 1));
        triangle[i][0] = triangle[i][i] = 1;
    }

    for (int i = 2; i < numRows; i++)
        for (int j = 1; j < i; j++)
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];

    return triangle;
}