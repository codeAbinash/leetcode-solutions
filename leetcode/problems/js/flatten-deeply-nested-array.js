/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
   if (n == 0) return arr

   let result = []
   for (let i = 0; i < arr.length; i++) {
      if (Array.isArray(arr[i])) {
         result.push(...flat(arr[i], n - 1))
      } else {
         result.push(arr[i])
      }
   }
   return result
};


// Write some test cases for your function
// and use console.log to output the results
// for example:
console.log(flat([1, 2, 3, [4, 5, [6, 7]]], 1))
// should output [1, 2, 3, 4, 5, [6, 7]]
console.log(flat([1, 2, 3, [4, 5, [6, 7]]], 2))
// should output [1, 2, 3, 4, 5, 6, 7]
console.log(flat([1, 2, 3, [4, 5, [6, 7]]], 3))
// should output [1, 2, 3, 4, 5, 6, 7]
console.log(flat([1, 2, 3, [4, 5, [6, 7]]], 4))
// should output [1, 2, 3, 4, 5, 6, 7]
console.log(flat([1, 2, 3, [4, 5, [6, 7]]], 5))
// should output [1, 2, 3, 4, 5, 6, 7]
console.log(flat([1, 2, 3, [4, 5, [6, 7]]], 6))
// should output [1, 2, 3, 4, 5, 6, 7]