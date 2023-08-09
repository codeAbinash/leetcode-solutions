// by @codeAbinash
// Time : O(n)
// Space : O(1)

inline int sum(int* arr, int len) {
   int sum = 0;
   for (int i = 0; i < len; i++)
      sum += arr[i];
   return sum;
}

int findMiddleIndex(int* nums, int numsSize) {
   int leftSum = 0, rightSum = sum(nums, numsSize);
   for (int i = 0; i < numsSize; i++) {
      leftSum += nums[i];
      if (leftSum == rightSum)
         return i;
      rightSum -= nums[i];
   }
   return -1;
}