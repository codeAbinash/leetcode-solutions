// by @codeAbinash

function memoize(fn) {
   const argsCache = new Map();

   return function (...args) {
      const argsStr = args.join(',')
      if (argsCache.has(argsStr)) return argsCache.get(argsStr)
      else {
         const result = fn(...args)
         argsCache.set(argsStr, result)
         return result
      }
   }
}
