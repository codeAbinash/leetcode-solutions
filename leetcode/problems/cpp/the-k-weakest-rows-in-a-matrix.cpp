// by @codeAbinash

#include <algorithm>

#include "vector"

using namespace std;

// Brute Force Solution
// Time Complexity: O(m * n)
class Solution {
 public:
   vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      vector<int> ans;
      vector<pair<int, int>> v;
      for (int i = 0; i < mat.size(); i++) v.push_back({count(mat[i].begin(), mat[i].end(), 1), i});
      sort(v.begin(), v.end());
      for (int i = 0; i < k; i++) ans.push_back(v[i].second);
      return ans;
   }
};

// Improved Solution using binary search
// Time Complexity: O(m * log n)
class Solution2 {
   int binarySearch(vector<int>& v, int l, int r) {
      while (l < r) {
         int mid = (l + r) / 2;
         if (v[mid] == 1)
            l = mid + 1;
         else
            r = mid;
      }
      return l;
   }

 public:
   vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      int m = mat.size(), n = mat[0].size();
      vector<pair<int, int>> v(m);

      for (int i = 0; i < m; i++) {
         int count = binarySearch(mat[i], 0, n);
         v[i] = {count, i};
      }

      sort(v.begin(), v.end());

      vector<int> ans(k);
      for (int i = 0; i < k; i++) ans[i] = v[i].second;
      return ans;
   }
};
