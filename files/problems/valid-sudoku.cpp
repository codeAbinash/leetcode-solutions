bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for (int i = 0; i < 9; i++) {
        int hashRow[9] = {0}, hashCol[9] = {0}, hashBoard[9] = {0};
        for(int j = 0; j < 9 ; j++) {
            char rowElem = board[i][j];
            char colElem = board[j][i];
            char boxElem = board[3 * (i / 3) + (j / 3)][3 * (i % 3) + (j % 3)];

            if(rowElem != '.') {
                if(hashRow[rowElem - '0' - 1] == 1)
                    return false;
                hashRow[rowElem - '0' - 1] = 1;
            }
            if (colElem != '.') {
                if(hashCol[colElem - '0' - 1] == 1)
                    return false;
                hashCol[colElem - '0' - 1] = 1;
            }
            if (boxElem != '.') {
                if(hashBoard[boxElem - '0' - 1] == 1)
                    return false;
                hashBoard[boxElem - '0' - 1] = 1;
            }
        }
    }
    return true;
}