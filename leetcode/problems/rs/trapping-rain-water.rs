pub struct Solution;

impl Solution {
   pub fn trap(height: Vec<i32>) -> i32 {
      if (height.len() == 0) {
         return 0;
      }

      let mut l = 0;
      let mut r = height.len() - 1;
      let mut l_max = height[l];
      let mut r_max = height[r];
      let mut res = 0;

      while l < r {
         if l_max < r_max {
            l += 1;
            l_max = l_max.max(height[l]);
            res += l_max - height[l]
         } else {
            r -= 1;
            r_max = r_max.max(height[r]);
            res += r_max - height[r]
         }
      }
      res
   }
}
