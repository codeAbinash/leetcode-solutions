// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "algorithm"
using namespace std;

class Solution {
public:
   int largestAltitude(vector<int>& gain) {
      int size = gain.size();
      int currentAlt = 0, maxAlt = 0;

      for (int i = 0; i < size; i++) {
         currentAlt += gain[i];
         maxAlt = max(currentAlt, maxAlt);
      }

      return maxAlt;
   }
};