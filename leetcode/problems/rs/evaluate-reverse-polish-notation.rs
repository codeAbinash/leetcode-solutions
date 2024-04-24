// by @codeAbinash
// Time : O(n)
// Space : O(n)

pub struct Solution;

impl Solution {
   pub fn eval_rpn(tokens: Vec<String>) -> i32 {
      let mut stack = Vec::new();

      for token in tokens {
         match &token[..] {
            "+" => {
               let a = stack.pop().unwrap();
               let b = stack.pop().unwrap();
               stack.push(a + b);
            }
            "-" => {
               let a = stack.pop().unwrap();
               let b = stack.pop().unwrap();
               stack.push(b - a);
            }
            "*" => {
               let a = stack.pop().unwrap();
               let b = stack.pop().unwrap();
               stack.push(a * b);
            }
            "/" => {
               let a = stack.pop().unwrap();
               let b = stack.pop().unwrap();
               stack.push(b / a);
            }
            _ => {
               stack.push(token.parse::<i32>().unwrap());
            }
         }
      }

      stack.pop().unwrap()
   }
}
