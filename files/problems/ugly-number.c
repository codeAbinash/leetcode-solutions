// by @codeAbinah
// O(n) time complexity
// O(1) space complexity

bool isUgly(int n){
    int i = 2;
    while(i < 6 && n){
        if(n % i == 0)
            n /= i;
        else
            i++;
    }
    return n == 1;
}