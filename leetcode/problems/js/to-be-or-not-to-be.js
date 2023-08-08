// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {string} val
 * @return {Object}
 */
const expect = (val) => {
   return {
      toBe: (expected) => {
         if (val !== expected)
            throw new Error('Not Equal')
         return true
      },
      notToBe: (expected) => {
         if (val === expected)
            throw new Error('Equal')
         return true
      }
   }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */