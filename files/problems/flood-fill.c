void changeColor(int** image, int rowSize, int colSize, int row, int col, int color,
          int newColor) {
    if (row < 0 || row >= rowSize ||col < 0 || col >= colSize) return;
    if (image[row][col] != color) return;

    image[row][col] = newColor;

    changeColor(image, rowSize, colSize, row + 1, col, color, newColor);
    changeColor(image, rowSize, colSize, row - 1, col, color, newColor);
    changeColor(image, rowSize, colSize, row, col + 1, color, newColor);
    changeColor(image, rowSize, colSize, row, col - 1, color, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc,
                int newColor, int* returnSize, int** returnColumnSizes) {
    if (imageSize < 1 || *imageColSize < 1) return image;

    int** im = malloc(sizeof(int*) * imageSize);
    *returnColumnSizes = malloc(sizeof(int) * imageSize);

    for (int i = 0; i < imageSize; i++) {
        im[i] = malloc(sizeof(int) * (*imageColSize));
        for (int j = 0; j < *imageColSize; j++) {
            im[i][j] = image[i][j];
        }
        (*returnColumnSizes)[i] = (*imageColSize);
    }
    *returnSize = imageSize;
    if (image[sr][sc] != newColor)
        changeColor(im, imageSize, *imageColSize, sr, sc, image[sr][sc], newColor);
    return im;
}
