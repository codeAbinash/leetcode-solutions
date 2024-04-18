pub struct Solution;

impl Solution {
   pub fn minimum_sum(num: i32) -> i32 {
      let d = num % 10;
      let c = ((num - d) % 100) / 10;
      let b = ((num - c - d) % 1000) / 100;
      let a = (num - b - c - d) / 1000;

      ((a + c) * 10 + b + d)
         .min((a + b) * 10 + c + d)
         .min((a + d) * 10 + b + c)
         .min((b + c) * 10 + a + d)
         .min((b + d) * 10 + a + c)
         .min((c + d) * 10 + a + b)
   }
}
