// by @codeAbinash
// Time : O(n)
// Space : O(n)

/**
 * @param {Object} obj
 * @return {Object}
 */
var compactObject = function (obj) {
   if (!obj) return obj
   if (obj instanceof Array) {
      let compact = []
      obj.forEach((elem) => {
         if (!elem) return
         if (typeof elem === 'object')
            compact.push(compactObject(elem))
         else
            compact.push(elem)
      })
      return compact
   }

   Object.keys(obj).forEach(key => {
      if (!obj[key]) delete obj[key]
      else if (typeof obj[key] === 'object')
         obj[key] = compactObject(obj[key])
   })

   return obj
};