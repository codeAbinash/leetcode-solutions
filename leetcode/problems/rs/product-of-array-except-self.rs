// by @codeAbinash
// Time : O(n)
// Space : O(1)

impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut left = 1;
        let mut right = 1;
        let mut result = vec![1; n];

        for i in 0..n {
            result[i] *= left;
            left *= nums[i];
            result[n - 1 - i] *= right;
            right *= nums[n - 1 - i];
        }
        result
    }
}
