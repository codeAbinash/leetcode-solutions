// by @codeAbinash
// Time : O(1)
// Space : O(1)

type ReturnObj = {
   increment: () => number,
   decrement: () => number,
   reset: () => number,
}

function createCounter(init: number): ReturnObj {
   const count = init
   return {
      increment: () => ++init,
      decrement: () => --init,
      reset: () => init = count
   }
};

/**
* const counter = createCounter(5)
* counter.increment(); // 6
* counter.reset(); // 5
* counter.decrement(); // 4
*/