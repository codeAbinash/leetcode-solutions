// by @codeAbinash
// Time : O(n * log(n))
// Space : O(n)

#include <queue>
#include <string>
#include <vector>

using namespace std;

// Using priority_queue
class Solution {
 public:
   vector<string> findRelativeRanks(vector<int>& score) {
      priority_queue<pair<int, int>> pq;
      for (int i = 0; i < score.size(); ++i) pq.push({score[i], i});
      vector<string> res(score.size());
      for (int i = 0; i < score.size(); ++i) {
         if (i == 0)
            res[pq.top().second] = "Gold Medal";
         else if (i == 1)
            res[pq.top().second] = "Silver Medal";
         else if (i == 2)
            res[pq.top().second] = "Bronze Medal";
         else
            res[pq.top().second] = to_string(i + 1);
         pq.pop();
      }
      return res;
   }
};

// Using sort
class Solution2 {
 public:
   vector<string> findRelativeRanks(vector<int>& score) {
      vector<pair<int, int>> v;
      for (int i = 0; i < score.size(); ++i) v.push_back({score[i], i});
      sort(v.rbegin(), v.rend());
      vector<string> res(score.size());
      for (int i = 0; i < score.size(); ++i) {
         if (i == 0)
            res[v[i].second] = "Gold Medal";
         else if (i == 1)
            res[v[i].second] = "Silver Medal";
         else if (i == 2)
            res[v[i].second] = "Bronze Medal";
         else
            res[v[i].second] = to_string(i + 1);
      }
      return res;
   }
};
