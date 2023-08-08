// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */

var cancellable = function (fn, args, t) {
   const executable = () => fn(...args)
   const timer = setInterval(executable, t)
   const cancel = () => clearInterval(timer)
   executable()
   return cancel
};