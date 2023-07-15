// by @codeAbinash
// Time : O(1)
// Space : O(1)

function isPowerOfTwo(n: number): boolean {
   return n > 0 && (n & n - 1) === 0
};