// by @codeAbinash
// Time : O(1)
// Space : O(1)

class Solution {
public:
   int countOdds(int low, int high) {
      return (high + 1) / 2 - low / 2;
   }
};

// A bit faster
class Solution {
public:
   int countOdds(int low, int high) {
      if (!(high & 1) && !(low & 1))
         return (high - low) / 2;
      return (high - low) / 2 + 1;
   }
};