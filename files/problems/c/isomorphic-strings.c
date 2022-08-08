int isIsomorphic(char* s, char* t) {
    int S[128] = {0};
    int T[128] = {0};
    int index = 1;
    int i = 0;

    while (s[i]) {
        if (S[s[i]] == T[t[i]]) {
            if (S[s[i]] == 0) {
                S[s[i]] = index;
                T[t[i]] = index;
                index++;
            }
        } else
            return 0;
        i++;
    }
    return 1;
}