// by @codeAbinash
// Time : O(n)
// Space : O(1)

function singleNumber(nums: number[]): number {
   let result = nums[0]
   let len = nums.length;
   for (let i = 1; i < len; i++)
      result ^= nums[i]
   return result
}