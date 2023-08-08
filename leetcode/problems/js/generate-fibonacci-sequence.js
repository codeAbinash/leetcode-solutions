// by @codeAbinash

/**
 * @return {Generator<number>}
 */
var fibGenerator = function* () {
   let a = 0;
   let b = 1;
   while (true) {
      yield a;
      const tmp = a;
      a = b;
      b += tmp;
   }
};