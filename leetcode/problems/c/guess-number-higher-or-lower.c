// by @codeAbinash
// Time : O(log n)
// Space : O(1)

int guess(int);
int guessNumber(int n) {
   int start = 1, end = n;
   while (start < end) {
      int mid = start + (end - start) / 2;
      int result = guess(mid);

      if (result == -1)
         end = mid - 1;
      else if (result == 1)
         start = mid + 1;
      else return mid;
   }
   return start;
}