// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
using namespace std;

class Solution {
public:
   bool judgeCircle(string moves) {
      int x = 0, y = 0;
      for (auto mv : moves) {
         switch (mv) {
         case 'R': x++;break;
         case 'L': x--;break;
         case 'U': y++;break;
         case 'D': y--;break;
         }
      }
      return x == 0 && y == 0;
   }
};
