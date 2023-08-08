// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
   const initial = init
   return {
      increment: () => ++init,
      decrement: () => --init,
      reset: () => init = initial
   }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */