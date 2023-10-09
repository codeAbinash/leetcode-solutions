// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "functional"
#include "cstdlib"
using namespace std;

class Solution {
public:
  int minIncrements(int n, vector<int>& cost) {
    int ans{};
    for (int i = cost.size() - 2; i > 0; i -= 2) {
      ans += abs(cost[i] - cost[i + 1]);
      cost[i / 2] += max(cost[i], cost[i + 1]);
    }
    return ans;
  }
};

class Solution {
public:
  int ans = 0;
  int solve(int i, vector<int>& cost) {
    if (i > cost.size()) return 0;
    int x = solve(2 * i, cost);
    int y = solve(2 * i + 1, cost);
    ans += abs(x - y);
    return max(x, y) + cost[i - 1];
  }
  int minIncrements(int n, vector<int>& cost) {
    solve(1, cost);
    return ans;
  }
};
