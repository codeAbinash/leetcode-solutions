// by @codeAbinash
// Time : O(n)
// Space : O(n)

use std::collections::VecDeque;

pub struct Solution;

impl Solution {
   pub fn max_sliding_window(nums: Vec<i32>, k: i32) -> Vec<i32> {
      let mut result = Vec::with_capacity(nums.len() - k as usize + 1);
      let mut q = VecDeque::with_capacity(k as usize);
      let mut l = 0;
      let mut r = 0;

      while r < nums.len() {
         while !q.is_empty() && nums[r] > nums[*q.back().unwrap()] {
            q.pop_back();
         }
         q.push_back(r);

         if l > *q.front().unwrap() {
            q.pop_front();
         }

         if r + 1 >= k as usize {
            result.push(nums[*q.front().unwrap()]);
            l += 1;
         }

         r += 1;
      }

      result
   }
}
