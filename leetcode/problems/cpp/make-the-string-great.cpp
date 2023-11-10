// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
#include "stack"
#include "string"
using namespace std;

// Using stack
class Solution {
  public:
   string makeGood(string s) {
      string ans;
      stack<char> st;
      for (auto c : s) {
         if (st.empty() || abs(st.top() - c) != 32)
            st.push(c);
         else
            st.pop();
      }
      while (!st.empty())
         ans += st.top(), st.pop();
      reverse(ans.begin(), ans.end());
      return ans;
   }
};

// Using string
class Solution {
  public:
   string makeGood(string s) {
      string ans;
      for (auto c : s) {
         if (ans.empty() || abs(ans.back() - c) != 32)
            ans.push_back(c);
         else
            ans.pop_back();
      }
      return ans;
   }
};
