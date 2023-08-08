// by @codeAbinash
// Time : O(1)
// Space : O(1)

#include "iostream"
using namespace std;

class Solution {
public:
   int hammingWeight(uint32_t n) {
      uint32_t count = 0;
      for (int i = 0; i < 32; i++) {
         if (n & 1)
            count++;
         n >>= 1;
      }
      return count;
   }
};