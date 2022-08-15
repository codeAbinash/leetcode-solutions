// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool isHappy(int n) {
    int digit, sum = 0;
    if (n == 1 || n == 7) return true;
    if (n < 10 && n != 1) return false;

    while (n > 0) {
        sum = sum + (n % 10) * (n % 10);
        n /= 10;
    }

    digit = isHappy(sum);

    if (digit == 1 || digit == 7) return true;
    return false;
}