// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "string"
using namespace std;

class Solution {
public:
   string tictactoe(vector<vector<int>>& moves) {
      int a[8] = { 0 }, b[8] = { 0 };
      int len = moves.size();
      for (int i = 0; i < len; i++) {
         int r = moves[i][0], c = moves[i][1];
         int* player = i & 1 ? b : a;
         player[r]++;
         player[c + 3]++;
         if (r == c) player[6]++;
         if (r == 2 - c) player[7]++;
      }

      for (int i = 0; i < 8;i++) {
         if (a[i] == 3) return "A";
         if (b[i] == 3) return "B";
      }
      return len == 9 ? "Draw" : "Pending";
   }
};