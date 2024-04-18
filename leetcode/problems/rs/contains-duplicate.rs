// by @codeAbinash
// Time : O(n)
// Space : O(n)

use std::collections::HashSet;

pub struct Solution;

impl Solution {
   pub fn contains_duplicate(nums: Vec<i32>) -> bool {
       let mut set = HashSet::new();
       for num in nums.into_iter() {
           if !set.insert(num) {
               return true;
           }
       }
       false
   }
}

   pub fn contains_duplicate_2(nums: Vec<i32>) -> bool {
      if nums.len() < 2 {
         return false;
      }
      nums.iter().collect::<HashSet<_>>().len() != nums.len()
   }
}
