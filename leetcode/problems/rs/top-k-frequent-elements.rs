pub struct Solution;

impl Solution {
   pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
      let mut stores = std::collections::HashMap::new();
      for i in nums.into_iter() {
          stores.entry(i).and_modify(|x| *x += 1).or_insert(1);
      }

      let mut stores = stores.into_iter().collect::<Vec<(i32, i32)>>();
      stores.sort_by(|a, b| b.1.cmp(&a.1));
      stores
          .iter()
          .map(|(k, _)| *k)
          .take(k as usize)
          .collect::<Vec<i32>>()
      
   }
}