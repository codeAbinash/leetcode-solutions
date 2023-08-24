// by @codeAbinash
// Time : O(n)
// Space : O(1)

int lengthOfLongestSubstring(char* s) {
   bool set[128] = { 0 };
   int left = 0, maxLen = 0, i = 0;

   while (s[i++]) {
      while (set[s[i - 1]])
         set[s[left++]] = 0;

      set[s[i - 1]] = 1;
      if (i - left > maxLen) maxLen = i - left;
   }
   return maxLen;
}
