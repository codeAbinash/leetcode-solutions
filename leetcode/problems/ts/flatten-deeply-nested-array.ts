// by @codeAbinash
// Time : O(n)
// Space : O(n)

type MultiDimensionalArray = (number | MultiDimensionalArray)[];

var flat = function (arr: MultiDimensionalArray, n: number): MultiDimensionalArray {

   let result: MultiDimensionalArray = []
   function helper(arr: MultiDimensionalArray, depth: number) {
      for (let elem of arr) {
         if (Array.isArray(elem) && depth < n)
            helper(elem, depth + 1)
         else
            result.push(elem)
      }
   }
   helper(arr, 0)
   return result;
};