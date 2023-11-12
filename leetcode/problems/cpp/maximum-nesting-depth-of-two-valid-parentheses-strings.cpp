// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
#include "string"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> maxDepthAfterSplit(string seq) {
      stack<char> s;
      vector<int> ans(seq.size());
      for (char c : seq) {
         if (c == '(') {
            s.push(c);
            ans.push_back(s.size() % 2);
         } else {
            ans.push_back(s.size() % 2);
            s.pop();
         }
      }
      return ans;
   }
};

// Better solution
class Solution {
  public:
   vector<int> maxDepthAfterSplit(string seq) {
      int len = seq.length();
      vector<int> ans(len);
      for (int i = 0; i < len; ++i) ans[i] = i & 1 ^ (seq[i] == '(');
      return ans;
   }
};
