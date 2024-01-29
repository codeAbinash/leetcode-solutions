// by @codeAbinash
// Time : O(n)
// Space : O(n)

impl Solution {
    pub fn running_sum(nums: Vec<i32>) -> Vec<i32> {
        let mut result = Vec::with_capacity(nums.len());
        let mut sum = 0;
        for num in nums {
            sum += num;
            result.push(sum);
        }
        result
    }
}
