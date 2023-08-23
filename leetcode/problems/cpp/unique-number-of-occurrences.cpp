// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "unordered_map"
using namespace std;

class Solution {
public:
   bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int, int> m1;
      unordered_map<int, int> m2;
      vector<int> count;
      int k = 0;
      bool isUnique = true;

      for (auto num : arr) m1[num]++;

      for (auto it = m1.begin();it != m1.end();it++) {
         if (m2[it->second] == 1) {
            isUnique = false;
            return isUnique;
         } else
            m2[it->second]++;
      }

      return isUnique;
   }
};