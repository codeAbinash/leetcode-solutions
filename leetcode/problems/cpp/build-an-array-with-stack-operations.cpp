// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<string> buildArray(vector<int>& target, int n) {
      vector<string> ans;
      int targetIndex = 0;

      for (int i = 1; i <= n; i++) {
         if (targetIndex == target.size()) break;
         if (target[targetIndex] == i) {
            ans.push_back("Push");
            targetIndex++;
         } else {
            ans.push_back("Push");
            ans.push_back("Pop");
         }
      }

      return ans;
   }
};

class Solution {
  public:
   vector<string> buildArray(vector<int>& target, int n) {
      vector<string> ans;
      int idx = 0;
      int size = target.size();
      for (int i = 1; i <= n, idx < size; i++) {
         ans.push_back("Push");
         if (target[idx] != i)
            ans.push_back("Pop");
         else
            idx++;
      }
      return ans;
   }
};
