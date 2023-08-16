// by @codeAbinash

const RES = Symbol("result")

function memoize(fn) {
   const cache = new Map()

   return (...args) => {
      let currentCache = cache;
      for (const arg of args) {
         if (!currentCache.has(arg))
            currentCache.set(arg, new Map())
         currentCache = currentCache.get(arg)
      }

      if (currentCache.has(RES)) return currentCache.get(RES)

      const result = fn(...args)

      currentCache.set(RES, result)
      return result
   }
}