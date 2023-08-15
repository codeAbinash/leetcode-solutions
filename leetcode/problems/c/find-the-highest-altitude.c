// by @codeAbinash
// Time : O(n)
// Space : O(1)

int largestAltitude(int* gain, int gainSize) {
   int currentAlt = 0, maxAlt = 0;

   for (int i = 0; i < gainSize; i++) {
      currentAlt += gain[i];
      if (currentAlt > maxAlt)
         maxAlt = currentAlt;
   }

   return maxAlt;
}