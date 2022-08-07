char *addBinary(char *a, char *b) {
    int len1 = strlen(a);
    int len2 = strlen(b);
    int sLen = (len1 > len2 ? len1 : len2) + 1;

    char *str = (char *)malloc((sLen + 1) * sizeof(char));
    str[sLen] = '\0';

    int sum = 0;

    while (len1 > 0 || len2 > 0 || sum > 0) {
        if (len1 > 0) sum += a[--len1] - '0';
        if (len2 > 0) sum += b[--len2] - '0';
        str[--sLen] = sum % 2 + '0';
        sum /= 2;
    }
    return str + sLen;
}