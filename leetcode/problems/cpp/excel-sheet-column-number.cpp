// by @codeAbinash

class Solution {
   public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length(), result = 0;
        for (int i = 0; i < len; i++)
            result = result * 26 + (columnTitle[i] - 'A' + 1);
        return result;
    }
};