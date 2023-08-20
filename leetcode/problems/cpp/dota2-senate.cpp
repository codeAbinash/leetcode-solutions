// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "queue"
using namespace std;

class Solution {
public:
   string predictPartyVictory(string senate) {
      queue <int> q1, q2;
      int size = senate.size();
      for (int i = 0; i < size; i++) {
         if (senate[i] == 'R') q1.push(i);
         else q2.push(i);
      }

      while (!q1.empty() && !q2.empty()) {
         int r_index = q1.front(), d_index = q2.front();
         q1.pop(); q2.pop();
         if (r_index < d_index) q1.push(r_index + size);
         else q2.push(d_index + size);
      }

      return q1.size() > q2.size() ? "Radiant" : "Dire";

   }
};