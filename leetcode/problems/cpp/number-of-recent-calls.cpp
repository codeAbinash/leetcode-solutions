// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
using namespace std;

class RecentCounter {
private: queue<int> q;
public:
   RecentCounter() {}

   int ping(int t) {
      q.push(t);
      while (q.front() < t - 3000)
         q.pop();
      return q.size();
   }
};