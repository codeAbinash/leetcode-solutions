// by @codeAbinash
// Time : O(n)
// Space: O(1)
#include <queue>
#include <vector>
using namespace std;

class Solution {
 public:
   int fillCups(vector<int>& amount) {
      int max = 0, sum = 0;
      for (int i : amount) {
         max = max > i ? max : i;
         sum += i;
      }
      return max > (sum >> 1) ? max : ((sum + 1) >> 1);
   }
};

// Using priority queue
// Time : O(nlogn)
// Space: O(n)
class Solution2 {
 public:
   int fillCups(vector<int>& amount) {
      priority_queue<int> pq(amount.begin(), amount.end());
      int ans = 0;
      while (pq.top() != 0) {
         int a = pq.top();
         pq.pop();
         int b = pq.top();
         pq.pop();
         a--, b--;
         pq.push(a);
         pq.push(b);
         ans++;
      }
      return ans;
   }
};
