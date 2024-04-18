pub struct Solution;

impl Solution {
   pub fn subtract_product_and_sum(n: i32) -> i32 {
      let mut product = 1;
      let mut sum = 0;
      let mut num = n;

      while num > 0 {
         let digit = num % 10;
         product *= digit;
         sum += digit;
         num /= 10;
      }
      
      product - sum

   }
}