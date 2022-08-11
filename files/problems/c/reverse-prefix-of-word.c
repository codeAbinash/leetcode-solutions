// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

void reverseStr(int index, char* str) {
    char tmp;
    for (int i = 0; i < index / 2 + 1; i++) {
        tmp = str[i];
        str[i] = str[index - i];
        str[index - i] = tmp;
    }
}

char* reversePrefix(char* word, char ch) {
    int index = -1;
    int i = 0;
    while (word[i]) {
        if (word[i] == ch) {
            index = i;
            break;
        }
        i++;
    }
    if(index != -1)
        reverseStr(index, word);
    return word;
}