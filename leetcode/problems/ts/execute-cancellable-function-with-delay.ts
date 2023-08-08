// by @codeAbinash
// Time : O(1)
// Space : O(1)

function cancellable(fn: Function, args: any[], t: number): Function {
   const timer = setTimeout(() => fn(...args), t)
   return () => clearTimeout(timer)
}