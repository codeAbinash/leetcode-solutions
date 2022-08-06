char *addStrings(char *num1, char *num2) {
    int len1 = strlen(num1), len2 = strlen(num2);
    int i = len1 - 1, j = len2 - 1;
    int carry = 0, sum, index = 0;
    char tmp;

    char *arr = (char *)malloc(sizeof(char) * (len1 + len2 + 2));

    while (i >= 0 && j >= 0) {
        sum = num1[i--] - '0' + num2[j--] - '0' + carry;
        carry = sum / 10;
        arr[index++] = sum % 10 + '0';
    }

    while (i >= 0) {
        sum = num1[i--] - '0' + carry;
        carry = sum / 10;
        arr[index++] = sum % 10 + '0';
    }

    while (j >= 0) {
        sum = num2[j--] - '0' + carry;
        carry = sum / 10;
        arr[index++] = sum % 10 + '0';
    }


    if (carry) arr[index++] = '1';
    arr[index] = '\0';


    i = 0;
    j = index - 1;

    while (i < j) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;j--;
    }

    return arr;
}