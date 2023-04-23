// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

var timeLimit = function (fn, t) {
   return async function (...args) {
      return new Promise((res, rej) => {
         fn(...args).then(res).catch(rej);
         setTimeout(() => rej("Time Limit Exceeded"), t);
      });
   }
};