// by @codeAbinash
// Time : O(n)
// Space : O(1)

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
   int dx = coordinates[1][0] - coordinates[0][0],
      dy = coordinates[1][1] - coordinates[0][1];
   for (size_t i = 2; i < coordinatesSize ; i++) {
      int c_dy = coordinates[i][1] - coordinates[i - 1][1];
      int c_dx = coordinates[i][0] - coordinates[i - 1][0];
      if (dy * c_dx != dx * c_dy) return false;
   }
   return true;
}