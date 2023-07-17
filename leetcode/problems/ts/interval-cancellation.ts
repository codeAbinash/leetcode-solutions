// by @codeAbinash
// Time : O(1)
// Space : O(1)

function cancellable(fn: Function, args: any[], t: number): Function {
   const executable = () => fn(...args)
   const timer = setInterval(executable, t)
   const cancel = () => clearInterval(timer)
   executable()
   return cancel
}