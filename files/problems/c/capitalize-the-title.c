// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

char* capitalizeTitle(char* title) {
    int safeWordLen = 0;
    int len = strlen(title);
    for (int i = 0; i <= len; i++) {
        if (title[i] >= 'A' && title[i] <= 'Z') title[i] += 'a' - 'A';

        if (title[i] == ' ' || title[i] == '\0') {
            if (safeWordLen > 2) title[i - safeWordLen] += 'A' - 'a';
            safeWordLen = 0;
            continue;
        } else
            safeWordLen++;
    }
    return title;
}