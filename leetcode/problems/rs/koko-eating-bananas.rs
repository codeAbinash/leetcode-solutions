pub struct Solution;

impl Solution {
   pub fn min_eating_speed(piles: Vec<i32>, h: i32) -> i32 {
      let mut l = 1;
      let mut r = *piles.iter().max().unwrap();

      while l < r {
         let mid = (l + r) / 2;
         if !can_finish(&piles, h, mid) {
            l = mid + 1;
         } else {
            r = mid;
         }
      }
      r
   }
}

fn can_finish(piles: &[i32], h: i32, k: i32) -> bool {
   let mut hours = 0;
   for pile in piles {
      hours += (*pile as f64 / k as f64).ceil() as i32;
   }
   hours <= h
}