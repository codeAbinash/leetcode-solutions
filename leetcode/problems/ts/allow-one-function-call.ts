//by @codeAbinash
// Time : O(1)
// Space : O(1) 

type Fn = (...args: any[]) => any

function once(fn: Fn): Fn {
   let called = false
   return function (...args) {
      if(!called){
         called = true
         return fn(...args)
      }
   }
}