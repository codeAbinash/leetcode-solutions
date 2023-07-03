// by @codeAbinash
// Using recursion
int addDigits(int num) {
    if (num < 10) return num;

    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return addDigits(sum);
}

// Better Solution
// O(1) Time and space complexity
int addDigits(int num) {
    if(num%9 == 0 && num/9 >= 1)
        return 9;
    return num % 9;
}