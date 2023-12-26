// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
using namespace std;

class Solution {
 public:
   int maximumScore(int a, int b, int c) {
      if (a < b) return maximumScore(b, a, c);
      if (b < c) return maximumScore(a, c, b);
      return b == 0 ? 0 : 1 + maximumScore(a - 1, b - 1, c);
   }
};

// Using priority queue
class Solution2 {
 public:
   int maximumScore(int a, int b, int c) {
      priority_queue<int> pq;
      pq.push(a);
      pq.push(b);
      pq.push(c);
      int ans = 0;
      while (pq.size() > 1) {
         int x = pq.top(); pq.pop();
         int y = pq.top(); pq.pop();
         if (--x) pq.push(x);
         if (--y) pq.push(y);
         ans++;
      }
      return ans;
   }
};
