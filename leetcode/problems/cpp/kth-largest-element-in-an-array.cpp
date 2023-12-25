// by @codeAbinash
// Time : O( n log n )
// Space : O(n)

#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

// Using priority queue
class Solution {
 public:
   int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int> pq;
      for (auto x : nums) pq.push(x);
      while (--k) pq.pop();
      return pq.top();
   }
};

// Using nth_element
class Solution2 {
 public:
   int findKthLargest(vector<int>& nums, int k) {
      nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
      return nums[k - 1];
   }
};
