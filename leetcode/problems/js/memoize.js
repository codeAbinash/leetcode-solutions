// by @codeAbinash
// Time : O(1)
// Space : O(n)

/**
 * @param {Function} fn
 */
function memoize(fn) {
   const cache = new Map()
   return function (...args) {
      let key = args.toString()
      if (cache.has(key))
         return cache.get(key)

      const val = fn(...args)
      cache.set(key, val)
      return val
   }
}