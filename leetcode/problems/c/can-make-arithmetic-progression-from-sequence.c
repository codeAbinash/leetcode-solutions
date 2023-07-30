// by @codeAbinash
// Time : O(n)
// Space : O(1)

int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

bool canMakeArithmeticProgression(int* arr, int arrSize) {
   int i, diff;
   qsort(arr, arrSize, sizeof(int), compare);
   diff = arr[1] - arr[0];
   for (i = 2; i < arrSize; i++) {
      if (arr[i] - arr[i - 1] != diff) {
         return false;
      }
   }
   return true;
}