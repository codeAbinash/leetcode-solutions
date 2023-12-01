// by @codeAbinash
// Time : O(n)
// Space : O(1)

impl Solution {
    pub fn is_isomorphic(s: String, t: String) -> bool {
        let mut s_map = [0; 128];
        let mut t_map = [0; 128];
        let mut index = 1;

        for (s_char, t_char) in s.chars().zip(t.chars()) {
            let s_char = s_char as usize;
            let t_char = t_char as usize;

            if s_map[s_char] != t_map[t_char] {
                return false;
            }

            if s_map[s_char] == 0 {
                s_map[s_char] = index;
                t_map[t_char] = index;
                index += 1;
            }
        }
        true
    }
}
