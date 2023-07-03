// by @codeAbinash
// Time Complexity : O(log n)
// Space Complexity : O(1)

int findComplement(int num) {
    int tmp = num, n = 0;
    while (tmp > 0) {
        n = (n << 1) | 1;
        tmp >>= 1;
    }
    return num ^ n;
}