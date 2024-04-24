// by @codeAbinash
// Time : O(n)
// Space : O(n)

pub struct Solution;

impl Solution {
   pub fn daily_temperatures(temperatures: Vec<i32>) -> Vec<i32> {
      let mut stack = Vec::new();
      let mut result = vec![0; temperatures.len()];
      for i in 0..temperatures.len() {
         while !stack.is_empty() && temperatures[i] > temperatures[*stack.last().unwrap()] {
            let last = stack.pop().unwrap();
            result[last] = (i - last) as i32;
         }
         stack.push(i);
      }
      result
   }
}
