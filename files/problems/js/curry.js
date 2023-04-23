// by @codeAbinash

var curry = function (fn) {
   return function curried(...args) {
      if (fn.length === args.length) return fn(...args)
      return function (...args2) {
         return curried(...args, ...args2);
      }
   };
};