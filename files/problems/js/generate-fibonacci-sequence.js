// by @codeAbinash

var fibGenerator = function* () {
   let a = 0, b = 1;
   while (true) {
      yield a;
      b = a + b;
      a = b - a;
   }
};