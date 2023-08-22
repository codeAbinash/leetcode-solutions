// by @codeAbinash
// Time : O(n)
// Space : O(1)

char* removeStars(char* s) {
   int i = 0, j = 0;
   while (s[i] != '\0') {
      if (s[i] == '*')
         j--;
      else
         s[j++] = s[i];
      i++;
   }
   s[j] = '\0';
   return s;
}