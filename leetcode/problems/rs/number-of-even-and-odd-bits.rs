// by @codeAbinash
// Time : O(n)
// Space : O(1)

impl Solution {
    pub fn even_odd_bit(n: i32) -> Vec<i32> {
        let mut ans = vec![0; 2];
        let mut n = n;
        let mut i = 0;
        while n > 0 {
            ans[i] += n & 1;
            n >>= 1;
            i ^= 1;
        }
        ans
    }
}
