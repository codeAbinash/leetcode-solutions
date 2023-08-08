// by @codeAbinash
// Time : O(n)
// Space : O(n)

/**
 * @param {Function} fn
 * @return {Array}
 */
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