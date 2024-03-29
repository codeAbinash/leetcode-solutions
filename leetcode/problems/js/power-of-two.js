// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function (n) {
   return n > 0 && (n & n - 1) === 0
};