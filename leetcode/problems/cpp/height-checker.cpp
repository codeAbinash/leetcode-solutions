// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "algorithm"
using namespace std;

class Solution {
public:
  int heightChecker(vector<int>& heights) {
    vector<int>arr = heights;
    int ans = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0;i < heights.size();i++)
      if (arr[i] != heights[i])
        ans++;
    return ans;
  }
};
