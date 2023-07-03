// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

char* toLowerCase(char* s) {
    int i = 0;
    while(s[i]){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
        i++;
    }
    return s;
}