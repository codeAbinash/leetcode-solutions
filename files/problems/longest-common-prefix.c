char *longestCommonPrefix(char **strs, int strsSize) {
    int i, j, index = 0, found = 1;

    int lenMin = strlen(strs[0]);

    for (i = 0; i < strsSize; i++) {
        j = strlen(strs[i]);
        if (j < lenMin) lenMin = j;
    }

    for (i = 0; i < lenMin; i++) {
        for (j = 0; j < strsSize; j++)
            if (strs[j][i] != strs[0][i]) {
                index = i;
                found = 0;
                break;
            }
        if (!found) break;
    }

    char *str = (char *)malloc(sizeof(char) * i + 1);

    for(j = 0; j < i; j++) str[j] = strs[0][j];
    str[j] = '\0';

    return str;
}