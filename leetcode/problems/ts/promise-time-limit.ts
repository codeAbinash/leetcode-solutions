// by @codeAbinash
// Time : O(1)
// Space : O(1)

type Fn = (...params: any[]) => Promise<any>;

function timeLimit(fn: Fn, t: number): Fn {
   return async (...args) => new Promise((res, rej) => {
      setTimeout(() => rej("Time Limit Exceeded"), t);
      fn(...args).then(res).catch(rej)
   })
};