// by @codeAbinash

declare global {
   interface Function {
      callPolyfill(context: Record<any, any>, ...args: any[]): any;
   }
}

Function.prototype.callPolyfill = function (context, ...args): any {
   const fn = this
   Object.defineProperty(context, '_fn', {
      value: fn,
      enumerable: false
   });
   return context._fn(...args);
}

/**
* function increment() { this.count++; return this.count; }
* increment.callPolyfill({count: 1}); // 2
*/