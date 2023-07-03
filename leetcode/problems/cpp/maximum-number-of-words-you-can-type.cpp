// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int canBeTypedWords(string text, string letters) {
        bool hash[26] = {0};
        int i, count = 0;
        for (i = 0; i < letters.size(); i++) hash[letters[i] - 'a'] = true;

        bool flag = true;
        for (i = 0; i < text.length(); i++) {
            if (text[i] == ' ') {
                if (flag) count++;
                flag = true;
            } else if (hash[text[i] - 'a'])
                flag = false;
        }
        return i == text.length() && flag ? count + 1 : count;
    }
};