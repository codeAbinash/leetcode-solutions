// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

char *convertToTitle(int columnNumber) {
    int i, remainder, size = 0;
    char *str;

    i = columnNumber;
    while (i-- > 0) {
        i /= 26;
        size++;
    }

    str = (char *)malloc(sizeof(char) * (size + 1));
    i = size;
    str[i--] = '\0';

    while (i >= 0) {
        remainder = --columnNumber % 26;
        str[i--] = 'A' + remainder;
        columnNumber /= 26;
    }
    return str;
}