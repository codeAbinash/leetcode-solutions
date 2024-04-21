pub struct Solution;

impl Solution {
   pub fn three_sum(nums: Vec<i32>) -> Vec<Vec<i32>> {
      let mut nums = nums;
      nums.sort();
      let mut res = Vec::new();

      for (i, a) in nums.iter().enumerate() {
         if i > 0 && a == &nums[i - 1] {
            continue;
         }

         let mut l = i + 1;
         let mut r = nums.len() - 1;

         while l < r {
            let b = nums[l];
            let c = nums[r];
            let three_sum = a + b + c;

            if three_sum > 0 {
               r -= 1;
            } else if three_sum < 0 {
               l += 1;
            } else {
               res.push(vec![*a, b, c]);
               l += 1;
               while l < r && nums[l] == nums[l - 1] {
                  l += 1;
               }
            }
         }
      }
      res
   }
}
