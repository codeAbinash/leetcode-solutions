// by @codeAbinash

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0, sum;
    for (int i = 0; i < accountsSize; i++) {
        sum = 0;
        for (int j = 0; j < accountsColSize[i]; j++) 
            sum += accounts[i][j];
        if (sum > max) max = sum;
    }
    return max;
}