// by @codeAbinash
// Time : O(1)
// Space : O(1)

function createHelloWorld(): Function {
   return (): string => "Hello World"
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */