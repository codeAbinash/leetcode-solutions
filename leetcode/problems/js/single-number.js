// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
   let singleNumber = nums[0]
   const len = nums.length
   for (let i = 1; i < len; i++)
      singleNumber ^= nums[i]
   return singleNumber
};