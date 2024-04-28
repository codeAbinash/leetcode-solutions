pub struct Solution;

impl Solution {
   pub fn find_median_sorted_arrays(nums1: Vec<i32>, nums2: Vec<i32>) -> f64 {
      let (nums1, nums2) = if nums1.len() > nums2.len() {
         (nums2, nums1)
      } else {
         (nums1, nums2)
      };
      let (m, n) = (nums1.len(), nums2.len());
      let (mut low, mut high) = (0, m);

      while low <= high {
         let partition_x = (low + high) / 2;
         let partition_y = (m + n + 1) / 2 - partition_x;

         let max_x = if partition_x == 0 {
            i32::MIN
         } else {
            nums1[partition_x - 1]
         };
         let min_x = if partition_x == m {
            i32::MAX
         } else {
            nums1[partition_x]
         };

         let max_y = if partition_y == 0 {
            i32::MIN
         } else {
            nums2[partition_y - 1]
         };
         let min_y = if partition_y == n {
            i32::MAX
         } else {
            nums2[partition_y]
         };

         if max_x <= min_y && max_y <= min_x {
            if (m + n) % 2 == 0 {
               return (max_x.max(max_y) + min_x.min(min_y)) as f64 / 2.0;
            } else {
               return max_x.max(max_y) as f64;
            }
         } else if max_x > min_y {
            high = partition_x - 1;
         } else {
            low = partition_x + 1;
         }
      }
      unreachable!()
   }
}
