// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function (n) {
   let count = 0;
   for (let i = 0; i < 32; i++) {
      if (n & 1)
         count++;
      n = n >> 1;
   }
   return count;
};