pub struct Solution;

impl Solution {
   pub fn is_palindrome(s: String) -> bool {
      let mut i: usize = 0;
      let mut j: usize = s.len() - 1;
      let chars = s.as_bytes();

      while i < j {
         while i < s.len() && !(chars[i] as char).is_alphanumeric() {
            i += 1;
         }
         while j > 0 && !(chars[j] as char).is_alphanumeric() {
            j -= 1;
         }

         if i >= j {
            return true;
         }

         if (chars[i] as char).to_ascii_lowercase() != (chars[j] as char).to_ascii_lowercase() {
            return false;
         }
         i += 1;
         j -= 1;
      }

      return true;
   }
}
