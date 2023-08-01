// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {Object} context
 * @param {any[]} args
 * @return {any}
 */
Function.prototype.callPolyfill = function (context, ...args) {
   const fn = this
   Object.defineProperty(context, '_fn', {
      value: fn,
      enumerable: false
   });
   return context._fn(...args);
}

/**
 * function increment() { this.count++; return this.count; }
 * increment.callPolyfill({count: 1}); // 2
 */