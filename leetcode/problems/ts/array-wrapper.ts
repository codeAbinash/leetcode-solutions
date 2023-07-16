// by @codeAbinash
// Time : O(n)
// Space : O(1)

class ArrayWrapper {
   nums: number[]
   constructor(nums: number[]) {
      this.nums = nums
   }

   valueOf() {
      return this.nums.reduce((acc, curr) => acc + curr, 0)
   }

   toString() {
      return JSON.stringify(this.nums)
   }
};