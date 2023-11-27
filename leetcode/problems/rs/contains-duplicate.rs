// by @codeAbinash
// Time : O(n)
// Space : O(n)

impl Solution {
   pub fn contains_duplicate(nums: Vec<i32>) -> bool {
       let mut set = HashSet::new();
       for num in nums.into_iter() {
           if !set.insert(num) {
               return true;
           }
       }
       false
   }
}
