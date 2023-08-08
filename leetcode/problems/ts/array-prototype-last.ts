// by @codeAbinash
// Time : O(1)
// Space : O(1)

declare global {
   interface Array<T> {
      last(): T | -1;
   }
}

Array.prototype.last = function () {
   const len = this.length
   if (len)
      return this[len - 1]
   return -1
};

/**
* const arr = [1, 2, 3];
* arr.last(); // 3
*/

export { };
