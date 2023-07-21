// by @codeAbinash
// Time : O(n)
// Space : O(n)

declare global {
   interface Array<T> {
      groupBy(fn: (item: T) => string): Record<string, T[]>
   }
}

Array.prototype.groupBy = function (fn) {
   const answer = {};
   for (const item of this) {
      const key = fn(item)
      if (key in answer)
         answer[key].push(item)
      else
         answer[key] = [item]
   }
   return answer
}

/**
* [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
*/