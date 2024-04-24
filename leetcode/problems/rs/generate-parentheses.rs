// by @codeAbinash
// Time : O(n)
// Space : O(n)

pub struct Solution;

impl Solution {
   pub fn generate_parenthesis(n: i32) -> Vec<String> {
      let mut res = vec![];
      let mut stack = vec![];
      Self::backtrack(&mut res, &mut stack, n, 0, 0);
      res
   }

   fn backtrack(res: &mut Vec<String>, stack: &mut Vec<char>, n: i32, open: i32, close: i32) {
      if stack.len() == n as usize * 2 {
         res.push(stack.iter().collect());
         return;
      }

      if open < n {
         stack.push('(');
         Self::backtrack(res, stack, n, open + 1, close);
         stack.pop();
      }

      if close < open {
         stack.push(')');
         Self::backtrack(res, stack, n, open, close + 1);
         stack.pop();
      }
   }
}
