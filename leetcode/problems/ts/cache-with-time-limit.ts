//// by @codeAbinash

class TimeLimitedCache {
   private cache: Map<number, { value: any, expiry: any }>;
   constructor() {
      this.cache = new Map<number, { value: number, expiry: Function }>();
   }

   set(key: number, value: number, duration: number): boolean {
      const cacheValue = this.cache.get(key)
      if (cacheValue)
         clearTimeout(cacheValue.expiry)
      const expiry = setTimeout(() => { this.cache.delete(key) }, duration)
      this.cache.set(key, { value, expiry })
      return Boolean(cacheValue)
   }

   get(key: number): number {
      const cacheValue = this.cache.get(key)
      if (cacheValue)
         return cacheValue.value
      return -1
   }

   count(): number {
      return this.cache.size
   }
}