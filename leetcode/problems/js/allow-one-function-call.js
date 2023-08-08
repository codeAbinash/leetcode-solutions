//// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function (fn) {
   let called = false;
   return (...args) => {
      if (!called) {
         called = true;
         return fn(...args);
      }
   }
};