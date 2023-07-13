// by @codeAbinash
// Time : O(n)
// Space : O(n)

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
   const len = arr.length
   const tArr = []
   for (let i = 0; i < len; i++)
      if (fn(arr[i], i))
         tArr.push(arr[i])
   return tArr
};