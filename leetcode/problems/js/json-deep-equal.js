// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

var areDeeplyEqual = function (o1, o2) {

   if (o1 === null && o2 === null) return true
   if ((o1 === null && o2 !== null) || (o1 !== null && o2 === null)) return false

   if (o1 === o2) return true

   if (typeof o1 != "object" && typeof o2 != "object") return false

   if (Array.isArray(o1) != Array.isArray(o2)) return false

   if (Object.keys(o1).length != Object.keys(o2).length) return false

   for (const key in o1) {
      if (!areDeeplyEqual(o1[key], o2[key])) return false
   }

   return true
};