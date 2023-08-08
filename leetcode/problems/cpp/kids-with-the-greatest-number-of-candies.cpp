// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "algorithm"
using namespace std;

class Solution {
public:
   vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int maxCandy = *max_element(candies.begin(), candies.end());
      vector<bool> ans;
      for (auto candy : candies) {
         if (candy + extraCandies >= maxCandy)
            ans.push_back(true);
         else
            ans.push_back(false);
      }
      return ans;
   }
};