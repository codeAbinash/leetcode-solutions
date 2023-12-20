// by codeAbinash
// Time: O(nlogn)
// Space: O(log n)

#include <queue>
#include <string>
using namespace std;

class Solution {
 public:
   int largestInteger(int num) {
      priority_queue<int> even, odd;
      string s = to_string(num);
      int size = s.size();

      for (int i = 0; i < s.size(); ++i) {
         if ((s[i] - '0') & 1)
            odd.push(s[i] - '0');
         else
            even.push(s[i] - '0');
      }

      int ans = 0;
      for (int i = 0; i < size; i++) {
         ans *= 10;
         if (s[i] & 1)
            ans += odd.top(), odd.pop();
         else
            ans += even.top(), even.pop();
      }
      return ans;
   }
};
