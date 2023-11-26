#include "algorithm"
#include "iostream"
#include "queue"
#include "unordered_map"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> topKFrequent(vector<int> &nums, int k) {
      unordered_map<int, int> m;
      vector<int> ret;

      for (auto &num : nums) m[num]++;

      vector<pair<int, int>> v(m.begin(), m.end());
      sort(v.begin(), v.end(),
           [](auto &a, auto &b) { return a.second > b.second; });

      for (int i = 0; i < k; i++) ret.push_back(v[i].first);
      return ret;
   }
};

// Using priority queue
class Solution {
  public:
   vector<int> topKFrequent(vector<int> &nums, int k) {
      unordered_map<int, int> m;
      vector<int> ret;
      priority_queue<pair<int, int>> pq;

      for (auto &num : nums) m[num]++;
      for (auto &e : m) pq.push({e.second, e.first});

      for (int i = 0; i < k; i++) {
         ret.push_back(pq.top().second);
         pq.pop();
      }

      return ret;
   }
};
