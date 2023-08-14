// by @codeAbinash
// Time : O(n)
// Space : O(1)

int cmp(const void* a, const void* b) {
   return *(int*)a - *(int*)b;
}

int maxOperations(int* nums, int numsSize, int k) {
   int i, j, count = 0;
   qsort(nums, numsSize, sizeof(int), cmp);
   for (i = 0, j = numsSize - 1; i < j;) {
      if (nums[i] + nums[j] == k) count++, i++, j--;
      else if (nums[i] + nums[j] < k) i++;
      else j--;
   }
   return count;
}