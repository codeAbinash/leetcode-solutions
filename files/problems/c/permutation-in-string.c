bool compHash(int *h1, int *h2) {
    for(int i = 0; i < 26; i++)
        if(h1[i] != h2[i])
            return false;
    return true;
}

bool checkInclusion(char * s1, char * s2){
    int hash1[26] = {0}, hash2[26] = {0};
    int i;
    int s1len = strlen(s1);
    int s2len = strlen(s2);
    if(s1len > s2len)
        return false;

    for(i = 0; i < s1len; i++) {
        hash1[s1[i] - 'a']++;
        hash2[s2[i] - 'a']++;
    }
    
    if(compHash(hash1, hash2))
        return true;

    for(i = s1len; i < s2len; i++) {
        hash2[s2[i - s1len] - 'a']--;
        hash2[s2[i] - 'a']++;
        if(compHash(hash1, hash2))
            return true;
    }
    return false;
}