// by @codeAbinash

bool checkSelfDiv(int num) {
    int tmp = num;
    while (tmp) {
        if (tmp % 10 == 0 || num % (tmp % 10) != 0) 
            return false;
        tmp /= 10;
    }
    return true;
}
int *selfDividingNumbers(int left, int right, int *returnSize) {
    int *arr = (int *)malloc(sizeof(int) * (right - left + 1));
    *returnSize = 0;
    for (int i = left; i <= right; i++)
        if (checkSelfDiv(i))
            arr[(*returnSize)++] = i;
    return arr;
}