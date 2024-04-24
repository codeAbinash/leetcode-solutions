// by @codeAbinash
// Time : O(n)
// Space : O(n)

pub struct Solution;

impl Solution {
   pub fn largest_rectangle_area(heights: Vec<i32>) -> i32 {
      let mut max_area = 0;
      let mut stack: Vec<(usize, &i32)> = Vec::new();

      for (i, h) in heights.iter().enumerate() {
         let mut start = i;
         while !stack.is_empty() && (*stack.last().unwrap()).1 > h {
            let (idx, height) = stack.pop().unwrap();
            max_area = max_area.max(height * (i - idx) as i32);
            start = idx;
         }
         stack.push((start, h));
      }

      for (i, h) in stack.iter() {
         max_area = max_area.max(*h * (heights.len() - i) as i32);
      }

      max_area
   }
}
