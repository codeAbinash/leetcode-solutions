// by codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "unordered_map"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int, int> m;
      stack<int> s;
      int size1 = nums1.size(), size2 = nums2.size();
      for (int i = size2 - 1; i >= 0; --i) {
         while (!s.empty() && s.top() <= nums2[i])
            s.pop();
         m[nums2[i]] = s.empty() ? -1 : s.top();
         s.push(nums2[i]);
      }
      vector<int> res(size1);
      for (int i = 0; i < size1; ++i)
         res[i] = m[nums1[i]];
      return res;
   }
};
