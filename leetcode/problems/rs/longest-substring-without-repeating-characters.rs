// by @codeAbinash
// Time : O(n)
// Space : O(n)

pub struct Solution;
use std::collections::VecDeque;
use std::cmp::max;

impl Solution {
   pub fn length_of_longest_substring(s: String) -> i32 {
      let mut result = 0;
      let mut window = VecDeque::<char>::new();

      for ch in s.chars() {
         if window.contains(&ch) {
            while let Some(prev) = window.pop_front() {
               if prev == ch {
                  break;
               }
            }
         }

         window.push_back(ch);
         result = max(result, window.len());
      }

      result as i32
   }
}
