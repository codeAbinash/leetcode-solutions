// by @codeAbinash
// Time : O(n)
// Space : O(1)

var compose = function (functions) {
   return function (x) {
      let val = x
      let len = functions.length
      while (len--) {
         val = functions[len](val)
      }
      return val
   }
}