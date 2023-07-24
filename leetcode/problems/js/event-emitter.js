// by @codeAbinash

class EventEmitter {
   map = new Map()
   EventEmitter() {
      this.map = map
   }
   subscribe(event, cb) {
      if (!this.map.has(event))
         this.map.set(event, [])

      const arr = this.map.get(event) || []
      arr.push(cb)
      return { unsubscribe: () => arr.splice(arr.indexOf(cb), 1) }
   }

   emit(event, args = []) {
      return this.map.get(event)?.map(fn => fn(...args)) ?? []
   }
}