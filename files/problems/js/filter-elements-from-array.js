// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

var filter = function (arr, fn) {
   var result = [];
   for (var i = 0; i < arr.length; i++)
      if (fn(arr[i], i))
         result.push(arr[i]);
   return result;
};