// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;


class Solution {
public:
   int maxArea(vector<int>& height) {
      int i = 0, j = height.size() - 1;
      int maxWater = 0;
      while (i < j) {
         int h1 = height[i], h2 = height[j];
         int water = (j - i) * min(h1, h2);
         maxWater = max(maxWater, water);

         if (h2 > h1) i++;
         else j--;
      }
      return maxWater;
   }
};