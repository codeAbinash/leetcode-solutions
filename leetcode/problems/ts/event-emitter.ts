// by @codeAbinash

type Callback = (...args: any[]) => any;
type Subscription = {
   unsubscribe: () => void
}

class EventEmitter {
   map = new Map<string, Callback[]>();

   subscribe(eventName: string, callback: Callback): Subscription {
      if (!this.map.has(eventName))
         this.map.set(eventName, [])

      const arr = this.map.get(eventName) || []
      arr.push(callback)

      return { unsubscribe: () => arr.splice(arr.indexOf(callback), 1) }
   }

   emit(eventName: string, args: any[] = []): any[] {
      return this.map.get(eventName)?.map(fn => fn(...args)) ?? []
   }
}