// by @codeAbinash

var TimeLimitedCache = function () {
   this.cache = new Map()
}

TimeLimitedCache.prototype.set = function (key, value, duration) {
   const isKeyPresent = this.cache.has(key)

   if (isKeyPresent) {
      const [_, time] = this.cache.get(key)
      clearTimeout(time)
   }

   const time = setTimeout(() => this.cache.delete(key), duration)
   this.cache.set(key, [value, time])
   return isKeyPresent
}

TimeLimitedCache.prototype.get = function (key) {
   if (!this.cache.has(key)) return -1

   const [value] = this.cache.get(key)
   return value
};

TimeLimitedCache.prototype.count = function () {
   return this.cache.size
};