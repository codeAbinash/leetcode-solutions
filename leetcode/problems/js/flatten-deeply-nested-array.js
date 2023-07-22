// by @codeAbinash
// Time : O(n)
// Space : O(n)

/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
   const result = [];
   function helper(arr, depth) {
      for (elem of arr) {
         if (Array.isArray(elem) && depth < n)
            helper(elem, depth + 1)
         else
            result.push(elem)
      }
   }
   helper(arr, 0)
   return result
}