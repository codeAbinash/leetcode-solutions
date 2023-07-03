// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

int* sumZero(int n, int* returnSize) {
    int* arr = (int*)calloc(n, sizeof(int));
    int start = n % 2 ? 1 : 0;
    int num = 1;
    *returnSize = n;
    for (int i = start; i < n; i += 2) {
        arr[i] = num;
        arr[i + 1] = -num;
        num++;
    }
    return arr;
}