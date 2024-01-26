// by @codeAbinash
// Time : O(n)
// Space : O(1)

impl Solution {
    pub fn largest_altitude(gain: Vec<i32>) -> i32 {
        let mut altitude = 0;
        let mut max_altitude = 0;
        for i in gain {
            altitude += i;
            max_altitude = max_altitude.max(altitude);
        }
        max_altitude
    }
}
