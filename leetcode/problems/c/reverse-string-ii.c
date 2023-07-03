// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

void rev(char* s, int start, int end) {
    char tmp;
    end--;
    while (start < end) {
        tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
}

char* reverseStr(char* s, int k) {
    int len = strlen(s);
    if (k > len) {
        rev(s, 0, len);
        return s;
    }
    int count = 0;

    for (int i = 0; i < len; i += k) {
        if (count % 2 != 0) {
            count++;
            continue;
        }
        if (i + k > len){
            rev(s,i,len);
            return s;
        }
        rev(s, i, i + k);
        count++;
    }
    return s;
}