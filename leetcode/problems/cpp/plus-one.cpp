// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   vector<int> plusOne(vector<int>& digits) {
      int len = digits.size();
      for (int i = len - 1; i >= 0; i--) {
         if (digits[i] != 9) {
            digits[i]++;
            return digits;
         }
         digits[i] = 0;
      }
      digits[0] = 1;
      digits.push_back(0);
      return digits;
   }
};