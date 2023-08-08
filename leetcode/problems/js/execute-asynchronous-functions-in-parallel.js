// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = async function (functions) {
   return new Promise((resolve, reject) => {
      const result = []
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
}