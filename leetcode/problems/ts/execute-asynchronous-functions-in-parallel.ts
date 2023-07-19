// by @codeAbinash
// Time : O(n)
// Space : O(1)

async function promiseAll<T>(functions: (() => Promise<T>)[]): Promise<T[]> {
   return new Promise((resolve, reject) => {
      const result: T[] = []
      const len = functions.length
      let count = len
      functions.forEach((fn, i) => {
         fn().then(res => {
            result[i] = res
            count--
            if (count === 0)
               return resolve(result)
         }).catch(reject)
      })
   })
};