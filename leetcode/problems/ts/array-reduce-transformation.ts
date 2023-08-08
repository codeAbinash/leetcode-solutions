//// by @codeAbinash
// Time : O(n)
// Space : O(1)

type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
   let val = init
   nums.forEach(num => { val = fn(val, num) })
   return val
};