// By @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

int* getRow(int rowIndex, int* returnSize){
    int *row = (int *)malloc((rowIndex + 1) * sizeof(int));
    *returnSize = rowIndex + 1;
    row[0] = row[rowIndex] = 1;

    for(int i = 1; i < rowIndex / 2 + 1; i++)
        row[rowIndex - i] = row[i] = (long) row[i - 1] * (rowIndex + 1 - i) / i;
        
    return row;
}