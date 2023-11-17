// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "unordered_map"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> nextGreaterElements(vector<int>& nums) {
      stack<int> s;
      unordered_map<int, int> m;
      vector<int> res(nums.size(), -1);

      for (int i = 0; i < nums.size() * 2; ++i) {
         int num = nums[i % nums.size()];
         while (!s.empty() && nums[s.top()] < num) {
            res[s.top()] = num;
            s.pop();
         }
         if (i < nums.size()) s.push(i);
      }

      return res;
   }
};

class Solution {
  public:
   vector<int> nextGreaterElements(vector<int>& nums) {
      vector<int> res(nums.size(), -1);
      vector<int> st;
      int n = nums.size();
      for (int i = 0; i < 2 * n; i++) {
         while (!st.empty() && nums[i % n] > nums[st.back()]) {
            res[st.back()] = nums[i % n];
            st.pop_back();
         }
         if (i < n) st.push_back(i);
      }
      return res;
   }
};
