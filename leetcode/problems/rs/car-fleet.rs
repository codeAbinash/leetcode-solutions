pub struct Solution;

impl Solution {
   // Using stack
   pub fn car_fleet(target: i32, position: Vec<i32>, speed: Vec<i32>) -> i32 {
      let mut cars = position.iter().zip(speed.iter()).collect::<Vec<_>>();
      cars.sort_by_key(|&(p, _)| p);
      cars.reverse();

      let mut stack = Vec::new();

      for (p, s) in cars {
         stack.push((target - p) as f64 / *s as f64);
         if stack.len() > 1 && stack[stack.len() - 1] <= stack[stack.len() - 2] {
            stack.pop();
         }
      }
      stack.len() as i32
   }

   pub fn car_fleet_2(target: i32, position: Vec<i32>, speed: Vec<i32>) -> i32 {
      let mut cars = position.iter().zip(speed.iter()).collect::<Vec<_>>();
      cars.sort_by_key(|&(p, _)| -p);
      let mut time = 0.0;
      let mut fleets = 0;
      for (p, s) in cars {
         let arrival = (target - p) as f64 / *s as f64;
         if arrival > time {
            time = arrival;
            fleets += 1;
         }
      }
      fleets
   }
}
