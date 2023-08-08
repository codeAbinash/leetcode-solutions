// by @codeAbinash
// Time : O(n)
// Space : O(n)

type Obj = Record<any, any>;

function compactObject(obj: Obj): Obj {
   if (!obj) return obj

   if (obj instanceof Array) {
      const compact: any = []
      obj.forEach((item) => {
         if (!item) return
         if (typeof item === 'object')
            compact.push(compactObject(item))
         else
            compact.push(item)
      })
      return compact
   }

   Object.keys(obj).forEach((key) => {
      const value = obj[key]
      if (!value) delete obj[key]
      else if (typeof value === 'object')
         obj[key] = compactObject(value)
   })
   return obj
};