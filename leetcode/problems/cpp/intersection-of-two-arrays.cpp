// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "map"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      int n1 = nums1.size(), n2 = nums2.size();
      map<int, int> hash;
      vector<int> res;

      for (int i = 0; i < n1; i++)
         hash[nums1[i]]++;

      for (int i = 0; i < n2; i++) {
         if (hash[nums2[i]] > 0) {
            res.push_back(nums2[i]);
            hash[nums2[i]]--;
         }
      }
      return res;
   }
};
