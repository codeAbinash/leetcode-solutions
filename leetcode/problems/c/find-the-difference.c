// by @codeAbinash
// Time : O(n)
// Space : O(1)

char findTheDifference(char* s, char* t) {
   int xor = 0;
   int index = 0;
   while (s[index] && t[index]) {
      xor ^= s[index];
      xor ^= t[index];
      index++;
   }
   xor ^= t[index];
   return xor;
}