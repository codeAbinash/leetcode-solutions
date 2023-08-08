// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function (nums, fn, init) {
   let val = init
   nums.forEach((num) => {
      val = fn(val, num)
   })
   return val
};