// by @codeAbinash
// Time : O(n)
// Space : O(1)


int arraySign(int* nums, int numsSize) {
   int minus = 0;
   for (int i = 0; i < numsSize; i++) {
      if (nums[i] == 0) return 0;
      if (nums[i] < 0) minus++;
   }
   return minus & 1 ? -1 : 1;
}