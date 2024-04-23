// by @codeAbinash
// Time : O(n)
// Space : O(n)
pub struct Solution;
impl Solution {
   pub fn min_window(s: String, t: String) -> String {
      if t == "" {
         return "".to_string();
      }

      let mut t_count = [0; 128];
      let mut window = [0; 128];
      for c in t.chars() {
         t_count[c as usize] += 1;
      }
      let mut have = 0;
      let need = t.chars().collect::<std::collections::HashSet<_>>().len();
      let mut res = [-1, -1];
      let mut res_len = std::usize::MAX;

      let s_b = s.as_bytes();

      let mut l = 0;

      for r in 0..s.len() {
         let c = s_b[r] as char;
         window[c as usize] += 1;

         if t_count[c as usize] > 0 && window[c as usize] == t_count[c as usize] {
            have += 1;
         }

         while have == need {
            if (r - l + 1) < res_len {
               res[0] = l as i32;
               res[1] = r as i32;
               res_len = r - l + 1;
            }

            let l_char = s_b[l] as char;
            if t_count[l_char as usize] > 0 && window[l_char as usize] == t_count[l_char as usize] {
               have -= 1;
            }
            window[l_char as usize] -= 1;

            l += 1;
         }
      }

      let l = res[0] as usize;
      let r = res[1] as usize;

      if res_len == std::usize::MAX {
         return "".to_string();
      }
      return s[l..=r].to_string();
   }
}
