// by @codeAbinash
// Time : O(nlogk)
// Space : O(k)

#include "queue"
#include "vector"

using namespace std;

class Solution {
 public:
   int kthSmallest(vector<vector<int>>& matrix, int k) {
      priority_queue<int> pq;
      for (auto row : matrix) {
         for (auto num : row) {
            pq.push(num);
            if (pq.size() > k) pq.pop();
         }
      }
      return pq.top();
   }
};
