int longestPalindrome(char* s) {
    int hash[128] = {0};
    int i = 0, count = 0;

    while (s[i]) {
        hash[s[i]]++;
        i++;
    }

    for (int i = 0; i < 128; i++) {
        if (hash[i] > 1) {
            if (hash[i] % 2 == 0)
                count += hash[i];
            else
                count += hash[i] - 1;
        }
    }

    for (int i = 0; i < 128; i++)
        if (hash[i] == 1 || hash[i] %2 == 1) 
            return count + 1;

    return count;
}