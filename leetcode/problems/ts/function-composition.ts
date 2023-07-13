// by @codeAbinash
// Time : O(n)
// Space : O(1)

type F = (x: number) => number;

function compose(functions: F[]): F {
   return function (x) {
      let val = x
      let len = functions.length
      while (len--) {
         val = functions[len](val)
      }
      return val
   }
}