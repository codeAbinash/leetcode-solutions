// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {number[]} encoded
 * @param {number} first
 * @return {number[]}
 */
var decode = function (encoded, first) {
   let result = [first]
   let size = encoded.length
   for (let i = 0; i < size; i++)
      result.push(result[i] ^ encoded[i])
   return result
}