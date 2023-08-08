// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {number} n
 * @param {number} start
 * @return {number}
 */
var xorOperation = function (n, start) {
   let i, res = start
   for (i = 1; i < n; i++)
      start += 2, res ^= start
   return res
}