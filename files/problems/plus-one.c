int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1, i = digitsSize;
    int* arr = (int*)malloc(sizeof(int) * (digitsSize + 1));
    while (i > 0) {
        arr[i] = (digits[i - 1] + carry) % 10;
        carry = (digits[i - 1] + carry) / 10;
        i--;
    }
    if (!arr[1]) {
        arr[0] = 1;
        *returnSize = digitsSize + 1;
        return arr;
    }
    *returnSize = digitsSize;
    return arr + 1;
}