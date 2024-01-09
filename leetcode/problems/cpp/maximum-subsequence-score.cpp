#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> P;

bool compare(P a, P b) { return a.first > b.first; }

class Solution {
public:
  long long maxScore(vector<int> &nums1, vector<int> &nums2, int k) {
    int n = nums1.size();
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; ++i)
      vec[i] = {nums2[i], nums1[i]};

    sort(vec.begin(), vec.end(), compare);

    long long sum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < k; i++) {
      sum += vec[i].second;
      pq.push(vec[i].second);
    }

    long long sol = sum * vec[k - 1].first;

    for (int i = k; i < vec.size(); i++) {
      sum += vec[i].second - pq.top();
      pq.pop();
      pq.push(vec[i].second);
      sol = max(sol, sum * vec[i].first);
    }

    return sol;
  }
};
