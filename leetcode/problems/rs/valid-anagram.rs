use std::collections::HashMap;
pub struct Solution;


impl Solution {
   pub fn is_anagram(s: String, t: String) -> bool {
      if s.len() != t.len() {
         return false;
      };

      let mut map: HashMap<char, i64> = HashMap::new();

      for (a, b) in s.chars().zip(t.chars()) {
         *map.entry(a).or_default() += 1;
         *map.entry(b).or_default() -= 1;
      }

      map.into_values().all(|count| count == 0)
   }
}
