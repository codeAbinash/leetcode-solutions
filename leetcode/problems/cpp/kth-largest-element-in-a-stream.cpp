// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "queue"
using namespace std;

class KthLargest {
private:
  int k;
  priority_queue<int, vector<int>, greater<int>> q;
public:
  KthLargest(int k, vector<int>& nums) {
    this->k = k;

    auto endPtr = nums.begin() + min(k, (int)nums.size());
    q = priority_queue<int, vector<int>, greater<int>>(nums.begin(), endPtr);

    for (int i = k; i < nums.size(); ++i)
      q.push(nums[i]), q.pop();
  }
  int add(int val) {
    q.push(val);
    if (q.size() > k) q.pop();
    return q.top();
  }
};
