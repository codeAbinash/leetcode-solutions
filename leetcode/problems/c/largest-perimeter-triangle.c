// by @codeAbinash
// Time : O(n * lon(n))
// Space : O(1)

int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

int largestPerimeter(int* nums, int numsSize) {
   qsort(nums, numsSize, sizeof(int), compare);

   for (int i = numsSize - 1; i >= 2; i--)
      if (nums[i] < nums[i - 1] + nums[i - 2])
         return nums[i] + nums[i - 1] + nums[i - 2];

   return 0;
}