// by @codeAbinash
// Time : O(log n)
// Space : O(n)

#include <queue>
#include <vector>

using namespace std;

struct Compare {
   bool operator()(const int& a, const int& b) { return a > b; }
};

class SeatManager {
   priority_queue<int, vector<int>, Compare> pq;

 public:
   SeatManager(int n) {
      for (int i = 1; i <= n; i++) pq.push(i);
   }

   int reserve() {
      int res = pq.top();
      pq.pop();
      return res;
   }

   void unreserve(int seatNumber) { pq.push(seatNumber); }
};
