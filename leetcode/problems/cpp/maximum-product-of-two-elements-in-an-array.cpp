// by @codeAbinash
// Time : O(nlogn)
// Space : O(1)

#include "queue"
#include "vector"

using namespace std;

class Solution {
 public:
   int maxProduct(vector<int>& nums) {
      int max1 = 0, max2 = 0;
      for (int n : nums) {
         if (n > max1)
            max2 = max1, max1 = n;
         else if (n > max2)
            max2 = n;
      }
      return (max1 - 1) * (max2 - 1);
   }
};

// Using priority queue
// by @codeAbinash
// Time : O(nlogn)
// Space : O(n)

class Solution2 {
 public:
   int maxProduct(vector<int>& nums) {
      priority_queue<int> pq(nums.begin(), nums.end());
      int max1 = pq.top();
      pq.pop();
      int max2 = pq.top();
      pq.pop();
      return (max1 - 1) * (max2 - 1);
   }
};
