bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int rowSize = matrixSize, colSize = matrixColSize[0];
    int start = 0, end = rowSize * colSize - 1;
    int mid, r, c;
    while(start <= end) {
        mid = (start + end) / 2;
        r = mid / colSize;
        c = mid % colSize;

        if(matrix[r][c] == target)
            return true;
        if(matrix[r][c] < target)
            start = mid + 1;
        else if(matrix[r][c] > target)
            end = mid - 1;
    }
    return false;
}