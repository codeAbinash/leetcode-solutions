// by @codeAbinash
// Time : O(1)
// Space : O(1)

function hammingWeight(n: number): number {
   let count = 0;
   for (let i = 0; i < 32; i++) {
      if (n & 1)
         count++;
      n = n >> 1;
   }
   return count;
};