// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

int countSegments(char * s){
    int i = 0, count = 0;
    while (s[i]){
        if(s[i] != ' ' && (s[i + 1] == ' ' || s[i+1] == '\0' ))
            count++;
        i++;
    }
    return count;
}