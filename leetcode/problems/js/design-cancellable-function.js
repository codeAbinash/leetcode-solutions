// by @codeAbinash

var cancellable = function (generator) {
   var cancel;
   const cancelPromise = new Promise((_, reject) => { cancel = () => reject("Cancelled"); });
   cancelPromise.catch(() => { });

   const promise = (async () => {
      let next = generator.next();
      while (!next.done) {
         try {
            next = generator.next(await Promise.race([next.value, cancelPromise]));
         } catch (e) {
            next = generator.throw(e);
         }
      }
      return next.value;
   })();

   return [cancel, promise];
};