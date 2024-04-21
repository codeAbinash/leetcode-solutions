use std::cmp::{max, min};

pub struct Solution;

impl Solution {
   pub fn max_area(height: Vec<i32>) -> i32 {
      let mut l = 0;
      let mut r = height.len() - 1;
      let mut res = 0;

      while l < r {
         let area = (r - l) as i32 * min(height[l], height[r]);
         res = max(res, area);

         if height[l] < height[r] {
            l += 1;
         } else {
            r -= 1;
         }
      }

      res
   }
}

// Using iterators in rust
pub struct Solution2;

impl Solution2 {
   pub fn max_area(height: Vec<i32>) -> i32 {
      let mut res = 0;
      let mut min = height.iter().copied().enumerate().peekable();
      let mut max = height.iter().copied().enumerate().rev().peekable();

      loop {
         let Some((l, a)) = min.peek() else {
            break;
         };
         let Some((r, b)) = max.peek() else {
            break;
         };

         let area = (r - l) as i32 * a.min(b);
         res = res.max(area);

         if l == r {
            break;
         } else if a < b {
            min.next();
         } else {
            max.next();
         }
      }
      res
   }
}
