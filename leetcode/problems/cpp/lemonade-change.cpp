// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   bool lemonadeChange(vector<int>& bills) {
      int ten = 0, five = 0;
      for (auto bill : bills) {
         if (bill == 5) five++;
         else if (bill == 10) five--, ten++;
         else if (ten > 0) ten--, five --;
         else five -= 3;
         if (five < 0)   return false;
      }
      return true;
   }
};