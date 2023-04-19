// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)


var reduce = function (nums, fn, init) {
   var val = init;
   for (var i = 0; i < nums.length; i++) {
      val = fn(val, nums[i]);
   }
   return val;
};