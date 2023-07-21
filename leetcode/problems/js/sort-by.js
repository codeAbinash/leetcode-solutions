// by @codeAbinash
// Time : O(log n)
// Space : O(n)

/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function (arr, fn) {
   return arr.sort((a, b) => fn(a) - fn(b))
}