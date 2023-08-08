// by @codeAbinash
// Time : O(1)
// Space : O(1)

type ToBeOrNotToBe = {
   toBe: (val: any) => boolean;
   notToBe: (val: any) => boolean;
};

function expect(val: any): ToBeOrNotToBe {
   return {
      toBe: (expected) => {
         if (val === expected)
            return true
         throw new Error('Not Equal')
      },
      notToBe: (expected) => {
         if (val !== expected)
            return true
         throw new Error('Equal')
      }
   }
};

/**
* expect(5).toBe(5); // true
* expect(5).notToBe(5); // throws "Equal"
*/