// By @codeAbinash
bool isPowerOfFour(int n) {
    if (n < 0 || (n && n - 1)) return false;
    while (n > 0) {
        if (n & 1) return true;
        n = n >> 2;
    }
    return false;
}

// Better Solution
// by @codeAbinash
// Time complexity O(1)
// Logic : (4^n-1) % 3 == 0, always
bool isPowerOfFour(int num) {
    return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
}