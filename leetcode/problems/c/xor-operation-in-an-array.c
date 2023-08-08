// by @codeAbinash
// Time : O(n)
// Space : O(1)

int xorOperation(int n, int start) {
   int i, res = start;
   for (i = 1; i < n; i++)
      start += 2, res ^= start;
   return res;
}