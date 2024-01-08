// by @codeAbinash
// Time : O(n log n)
// Space : O(n)

#include "queue"
#include "vector"
using namespace std;

class Solution {
 public:
   vector<int> numberGame(vector<int>& nums) {
      std::priority_queue<int, std::vector<int>, std::greater<int>> pq(nums.begin(), nums.end());
      vector<int> ans(nums.size());

      int i = 0;
      while (pq.size() > 1) {
         int a = pq.top();
         pq.pop();
         int b = pq.top();
         pq.pop();
         ans[i++] = b;
         ans[i++] = a;
      }

      return ans;
   }
};

// Another Solution
class Solution2 {
 public:
   vector<int> numberGame(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      for (int i = 0; i < nums.size() - 1; i += 2) swap(nums[i], nums[i + 1]);
      return nums;
   }
};
