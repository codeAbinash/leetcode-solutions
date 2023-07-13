// by @codeAbinash
// Time : O(n)
// Space: O(n)

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
   const len = arr.length
   const tArr = []
   for (let i = 0; i < len; i++)
      tArr[i] = fn(arr[i], i)
   return tArr
};