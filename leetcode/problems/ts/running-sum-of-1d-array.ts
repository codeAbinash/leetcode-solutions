// by @codeAbinash
// Time : O(n)
// Space : O(1)

function runningSum(nums: number[]): number[] {
  for (let i = 1; i < nums.length; i++)
    nums[i] = nums[i] + nums[i - 1]
  return nums
}
