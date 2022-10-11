// by @codeAbinash

class Solution {
   public:
    int countOperations(int num1, int num2) {
        unsigned int count = 1;
        if (num1 == 0 || num2 == 0) return 0;
        while (abs(num1 - num2)) {
            if (num1 > num2)
                num1 = num1 - num2;
            else
                num2 = num2 - num1;
            count++;
        }
        return count;
    }
};