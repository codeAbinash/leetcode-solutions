// by @codeAbinash


/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function (arr, size) {
   const len = arr.length
   const result = []
   for (let i = 0; i < len; i += size)
      result.push(arr.slice(i, size + i))
   return result
}