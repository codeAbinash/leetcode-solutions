pub struct Solution;

use std::collections::HashMap;

struct TimeMap {
   store: HashMap<String, Vec<(i32, String)>>,
}

/**
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl TimeMap {
   fn new() -> Self {
      TimeMap {
         store: HashMap::new(),
      }
   }

   fn set(&mut self, key: String, value: String, timestamp: i32) {
      let entry = self.store.entry(key).or_insert(vec![]);
      entry.push((timestamp, value));
   }

   fn get(&self, key: String, timestamp: i32) -> String {
      if let Some(entry) = self.store.get(&key) {
         let mut l = 0;
         let mut r = entry.len() as i32 - 1;
         while l <= r {
            let m = (l + r) / 2;
            if entry[m as usize].0 == timestamp {
               return entry[m as usize].1.clone();
            }
            if entry[m as usize].0 < timestamp {
               l = m + 1;
            } else {
               r = m - 1;
            }
         }
         if r < 0 {
            return "".to_string();
         }
         entry[r as usize].1.clone()
      } else {
         "".to_string()
      }
   }
}
