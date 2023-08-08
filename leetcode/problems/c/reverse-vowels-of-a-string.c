// by @codeAbinash
// Time : O(n)
// Space : O(1)

void inline swap(char* a, char* b) {
   char tmp = *a;
   *a = *b;
   *b = tmp;
}

bool inline isVowel(char c) {
   return strchr("aeiouAEIOU", c) != NULL;
}

char* reverseVowels(char* s) {
   char* start, * end, tmp;
   start = s;
   end = s + strlen(s) - 1;
   while (start < end) {
      while (start < end && !isVowel(*start)) start++;
      while (start < end && !isVowel(*end)) end--;
      swap(start, end);
      start++, end--;
   }
   return s;
}