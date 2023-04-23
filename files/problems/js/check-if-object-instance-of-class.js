// by @codeAbinash
// Time Complexity : O(1)
// Space Complexity : O(1)

/**
 * @param {any} object
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function (obj, classFunction) {
   if (obj === null || obj === undefined || typeof obj === null || typeof classFunction !== 'function') return false;
   return Object(obj) instanceof classFunction
};
