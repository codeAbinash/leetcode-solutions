// by @codeAbinash
// Time : O(nlogn)
// Space : O(n)


#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
 public:
   vector<int> maxSubsequence(vector<int>& nums, int k) {
      priority_queue<pair<int, int>> pq;
      for (int i = 0; i < nums.size(); i++) pq.push({nums[i], i});

      vector<int> indices;
      while (k--) {
         pair<int, int> t = pq.top();
         indices.push_back(t.second);
         pq.pop();
      }
      sort(indices.begin(), indices.end());

      vector<int> ans;
      for (int i = 0; i < indices.size(); i++) ans.push_back(nums[indices[i]]);

      return ans;
   }
};

// Using map
class Solution2 {
 public:
   vector<int> maxSubsequence(vector<int>& nums, int k) {
      priority_queue<int> pq;
      for (int num : nums) pq.push(num);
      unordered_map<int, int> mp;

      while (k--) {
         mp[pq.top()]++;
         pq.pop();
      }

      vector<int> ans;
      for (int num : nums) {
         if (mp[num] > 0) {
            mp[num]--;
            ans.push_back(num);
         }
      }
      return ans;
   }
};
