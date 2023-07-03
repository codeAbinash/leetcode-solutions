// by @codeAbinash
// Time Complexity : O(1)
// Space Complexity : O(1)

/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function (n) {
   return function () {
      return n++;
   };
}