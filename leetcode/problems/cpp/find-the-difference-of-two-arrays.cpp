// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "unordered_set"
#include "algorithm"
using namespace std;

class Solution {
public:
   vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> s1(nums1.begin(), nums1.end());
      unordered_set<int> s2(nums2.begin(), nums2.end());
      vector<int> v1, v2;
      for (auto i : s1)
         if (!s2.count(i)) v1.push_back(i);

      for (auto i : s2)
         if (!s1.count(i)) v2.push_back(i);

      return { v1, v2 };
   }
};