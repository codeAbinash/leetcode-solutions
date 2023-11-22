use std::collections::HashMap;

impl Solution {
    pub fn num_jewels_in_stones(jewels: String, stones: String) -> i32 {
        let mut map = HashMap::new();
        let mut count = 0;
        for c in jewels.chars() {
            map.insert(c, 0);
        }
        for c in stones.chars() {
            if map.contains_key(&c) {
                count += 1;
            }
        }
        count
    }
}
