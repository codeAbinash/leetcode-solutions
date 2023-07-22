// by @codeAbinash
// Time : O(n)
// Space : O(n)

function join(arr1: any[], arr2: any[]): any[] {
   const result: any[] = []
   for (let i = 0; i < arr1.length; i++)
      result[arr1[i].id] = arr1[i]

   for (let i = 0; i < arr2.length; i++) {
      if (result[arr2[i].id])
         for (const key in arr2[i])
            result[arr2[i].id][key] = arr2[i][key]
      else
         result[arr2[i].id] = arr2[i]
   }

   return Object.values(result)
}