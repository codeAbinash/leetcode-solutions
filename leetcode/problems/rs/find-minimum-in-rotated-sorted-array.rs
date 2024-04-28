pub struct Solution;

impl Solution {
   pub fn find_min(nums: Vec<i32>) -> i32 {
      let mut res = nums[0];
      let mut l = 0;
      let mut r = nums.len() - 1;

      while l <= r {
         if nums[l] < nums[r] {
            res = res.min(nums[l]);
            break;
         }

         let m = (l + r) / 2;
         res = res.min(nums[m]);

         if nums[m] >= nums[l] {
            l = m + 1;
         } else {
            r = m - 1;
         }
      }
      res
   }
}