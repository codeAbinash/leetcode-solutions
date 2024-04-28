pub struct Solution;

impl Solution {
   pub fn search(nums: Vec<i32>, target: i32) -> i32 {
      let mut l = 0;
      let mut r = nums.len() as i32 - 1;

      while l <= r {
         let m = (l + r) / 2;
         if nums[m as usize] == target {
            return m;
         }
         if nums[l as usize] <= nums[m as usize] {
            if target > nums[m as usize] || target < nums[l as usize] {
               l = m + 1;
            } else {
               r = m - 1;
            }
         } else {
            if target < nums[m as usize] || target > nums[r as usize] {
               r = m - 1;
            } else {
               l = m + 1;
            }
         }
      }
      -1
   }
}
