char *getHint(char *s, char *g) {
    char *arr = (char *)malloc(sizeof(char) * 10);
    int a[10] = {0}, b[10] = {0};
    int bull = 0, cow = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == g[i]) {
            bull++;
        } else {
            a[s[i] - '0']++;
            b[g[i] - '0']++;
        }
    }
    int min = 0;
    for (int i = 0; i < 10; i++) {
        if (b[i] != 0 && a[i] != 0) {
            min = a[i] < b[i] ? a[i] : b[i];
            cow = cow + min;
        }
    }
    char bu[4], co[4];
    sprintf(bu, "%d", bull);
    sprintf(co, "%d", cow);
    int index = 0;
    for (int i = 0; i < strlen(bu); i++) {
        arr[index++] = bu[i];
    }
    arr[index++] = 'A';
    for (int i = 0; i < strlen(co); i++) {
        arr[index++] = co[i];
    }
    arr[index++] = 'B';
    arr[index] = '\0';
    return arr;
}