pub struct Solution;

impl Solution {
   pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
      use std::collections::HashMap;
      let mut map: HashMap<Vec<u8>, Vec<String>> = HashMap::new();
      for s in strs {
         let mut key = s.as_bytes().to_vec();
         key.sort();
         map.entry(key).or_insert(Vec::new()).push(s);
      }
      map.into_iter().map(|(_, v)| v).collect()
   }
}
