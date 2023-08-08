// by @codeAbinash
// Time : O(n)
// Space : O(1)

void moveZeroes(int* nums, int numsSize) {
   int index = 0;
   for (int i = 0; i < numsSize; i++)
      if (nums[i])
         nums[index++] = nums[i];

   while (numsSize > index)
      nums[index++] = 0;
}