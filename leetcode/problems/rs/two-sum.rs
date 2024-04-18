pub struct Solution;

use std::collections::HashMap;


impl Solution {
   pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
      let mut map = HashMap::new();

      for (i, num) in nums.into_iter().enumerate() {
         let diff = target - num;

         if let Some(&j) = map.get(&diff) {
            return vec![i as i32, j as i32];
         } else {
            map.insert(num, i);
         }
      }

      unreachable!()
   }
}
