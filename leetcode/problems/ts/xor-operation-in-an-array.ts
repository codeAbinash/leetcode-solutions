// by @codeAbinash
// Time : O(n)
// Space : O(1)

function xorOperation(n: number, start: number): number {
   let res = start
   for (let i = 1; i < n; i++)
      start += 2, res ^= start
   return res
}