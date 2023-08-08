// by @codeAbinash

function chunk(arr: any[], size: number): any[][] {
   const result: any[][] = []
   const len = arr.length

   for (let i = 0; i < len; i += size)
      result.push(arr.slice(i, i + size))

   return result
};