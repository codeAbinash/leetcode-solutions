// by @codeAbinash
// Time : O(log(n))
// Space : O(1)

bool isPalindrome(int x) {
   if (x < 0) return false;
   unsigned int reversed = 0;
   int num = x;
   while (num) {
      reversed = reversed * 10 + num % 10;
      num /= 10;
   }
   return reversed == x;
}