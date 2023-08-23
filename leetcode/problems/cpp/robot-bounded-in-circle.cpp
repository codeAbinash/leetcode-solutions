// by @codeAbinash

#include "string"
using namespace std;

class Solution {
public:
   bool isRobotBounded(string instructions) {
      char face = 'N';
      int x = 0, y = 0, len = instructions.length();

      for (auto ins : instructions) {
         if (ins == 'G') {
            switch (face) {
            case 'N':  y++; break;
            case 'S':  y--; break;
            case 'E':  x++; break;
            case 'W':  x--; break;
            }
         } else {
            switch (face) {
            case 'N':
               face = ins == 'L' ? 'W' : 'E';break;
            case 'W':
               face = ins == 'L' ? 'S' : 'N';break;
            case 'S':
               face = ins == 'L' ? 'E' : 'W';break;
            default:
               face = ins == 'L' ? 'N' : 'S';
            }
         }
      }
      return (x == 0 && y == 0) || face != 'N';
   }
};