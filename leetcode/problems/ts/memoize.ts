// by @codeAbinash
// Time : O(1)
// Space : O(n)

type Fn = (...params: any) => any

function memoize(fn: Fn): Fn {
   const cache = new Map()
   return function (...args) {
      const key = args.toString()
      if (cache.has(key))
         return cache.get(key)

      const result = fn(...args)
      cache.set(key, result)
      return result
   }
}