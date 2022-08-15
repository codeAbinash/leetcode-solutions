// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

// The missing number is (seriesSum - arraySum)
int missingNumber(int* nums, int numsSize){
    int sum = 0;
    for(int i = 0; i < numsSize; i++)
        sum+=nums[i];
    int seriesSum = (numsSize * (numsSize + 1) / 2);
    return seriesSum - sum;
}