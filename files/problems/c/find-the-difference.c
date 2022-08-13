// by @codeAbinash
// Time Complexity : O(m + n), m = length of s, n = length of t
// Space Complexity : O(1)

char findTheDifference(char * s, char * t){
    int i = 0, hash[26] = {0};
    while(s[i]) hash[s[i++] - 'a']++;
    i = 0;
    while(t[i]) hash[t[i++] - 'a']--;

    for(i = 0; i < 26; i++)
        if(hash[i] != 0)
            return i + 'a';
    return '\0';
}