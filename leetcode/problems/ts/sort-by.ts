// by @codeAbinash
// Time : O(log n)
// Space : O(n)

function sortBy(arr: any[], fn: Function): any[] {
   return arr.sort((a, b) => fn(a) - fn(b));
};