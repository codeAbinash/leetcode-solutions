// by @codeAbinash

class Solution {
   public:
    string toHex(int num) {
        if (num == 0) return "0";
        const string chars = "0123456789abcdef";
        unsigned int n = num;
        string result;

        while (n > 0) {
            result = chars[n % 16] + result;
            n /= 16;
        }
        return result;
    }
};