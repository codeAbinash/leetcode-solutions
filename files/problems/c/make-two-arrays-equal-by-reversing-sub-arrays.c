// by @codeAbinash
// Time complexity : O(n)
// Space Complexity : O(1)

bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int i = 0;
    int hash[1001] = {0};
    while (i < arrSize) hash[arr[i++]]++;
    i = 0;
    while (i < arrSize) hash[target[i++]]--;
    for (i = 0; i <= 1000; i++)
        if (hash[i] != 0) return false;
    return true;
}