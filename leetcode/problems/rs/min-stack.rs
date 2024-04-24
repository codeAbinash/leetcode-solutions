pub struct Solution;
struct MinStack {
   s: Vec<(i32, i32)>,
}

/**
* `&self` means the method takes an immutable reference.
* If you need a mutable reference, change it to `&mut self` instead.
*/
impl MinStack {
   fn new() -> Self {
      MinStack { s: Vec::new() }
   }

   fn push(&mut self, val: i32) {
      if self.s.is_empty() {
         self.s.push((val, val));
      } else {
         let min = std::cmp::min(val, self.s[self.s.len() - 1].1);
         self.s.push((val, min));
      }
   }

   fn pop(&mut self) {
      self.s.pop();
   }

   fn top(&self) -> i32 {
      self.s.last().unwrap().0
   }

   fn get_min(&self) -> i32 {
      self.s.last().unwrap().1
   }
}
