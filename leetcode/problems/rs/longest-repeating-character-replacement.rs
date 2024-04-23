// by @codeAbinash
// Time : O(n)
// Space : O(1)

pub struct Solution;

impl Solution {
   pub fn character_replacement(s: String, k: i32) -> i32 {
      let bytes = s.into_bytes();
      let mut l: usize = 0;
      let mut result = 0;
      let mut counts: Vec<i32> = vec![0; 26];
      let mut max_counts: i32 = 0;

      for r in 0..bytes.len() {
         counts[(bytes[r] - b'A') as usize] += 1;
         max_counts = max_counts.max(counts[(bytes[r] - b'A') as usize]);

         if (r - l + 1) - max_counts as usize > k as usize {
            counts[(bytes[l] - b'A') as usize] -= 1;
            l += 1;
         }
         result = result.max(r - l + 1);
      }
      return result as i32;
   }
}
