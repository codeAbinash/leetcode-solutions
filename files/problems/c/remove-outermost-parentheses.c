// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

char* removeOuterParentheses(char* s) {
    char *slow, *fast;
    slow = fast = s;
    int stack = 0;

    while (*fast) {
        *slow = *fast;
        if (*fast == '(') {
            if (stack != 0) slow++;
            stack++;
        } else {
            stack--;
            if (stack != 0) slow++;
        }
        fast++;
    }
    *slow = '\0';
    return s;
}