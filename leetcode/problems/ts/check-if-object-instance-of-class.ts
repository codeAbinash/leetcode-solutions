// by @codeAbinash
// Time : O(n)
// Space : O(1)

/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function (obj, classFunction) {
   if (obj === null || obj === undefined || typeof classFunction !== "function")
      return false

   let curProto = Object.getPrototypeOf(obj)

   while (curProto !== null) {
      if (curProto === classFunction.prototype) return true
      curProto = Object.getPrototypeOf(curProto)
   }
   return false
}