// by @codeAbinash
// Time : O(n log n)
// Space : O(n)

#include "queue"
#include "unordered_map"
#include "vector"

using namespace std;

class Solution {
 public:
   int minSetSize(vector<int>& arr) {
      unordered_map<int, int> m;
      for (int i : arr) m[i]++;
      priority_queue<int> q;
      for (auto i : m) q.push(i.second);
      int res = 0, cnt = 0;
      while (cnt < arr.size() / 2) {
         cnt += q.top();
         q.pop();
         res++;
      }
      return res;
   }
};
