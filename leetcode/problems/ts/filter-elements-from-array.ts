// by @codeAbinash
// Time : O(n)
// Space : O(n)

function filter(arr: number[], fn: (n: number, i: number) => any): number[] {
   const len = arr.length
   const filtered: number[] = []

   for (let i = 0; i < len; i++)
      if (fn(arr[i], i))
         filtered.push(arr[i])
   return filtered
};