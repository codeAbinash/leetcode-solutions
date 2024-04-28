pub struct Solution;
impl Solution {
   pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
      let row = matrix.len();
      let col = matrix[0].len();

      let mut top = 0;
      let mut bottom = row - 1;

      while top <= bottom {
         let row = (top + bottom) / 2;
         if target > matrix[row][col - 1] {
            top = row + 1;
         } else if target < matrix[row][0] {
            if row == 0 {
               return false;
            }
            bottom = row - 1;
         } else {
            top = row;
            break;
         }
      }

      if top > bottom {
         return false;
      }

      let mut left = 0;
      let mut right = col - 1;
      while left <= right {
         let mid = (left + right) / 2;
         if matrix[top][mid] == target {
            return true;
         } else if matrix[top][mid] < target {
            left = mid + 1;
         } else {
            right = mid - 1;
         }
      }
      false
   }
}
