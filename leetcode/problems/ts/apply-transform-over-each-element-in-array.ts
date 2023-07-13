// by @codeAbinash
// Time : O(n)
// Space : O(n)

function map(arr: number[], fn: (n: number, i: number) => number): number[] {
   const len = arr.length
   const transformedArray: number[] = []
   for (let i = 0; i < len; i++)
      transformedArray[i] = fn(arr[i], i)
   return transformedArray
};