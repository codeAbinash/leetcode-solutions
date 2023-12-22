// by @codeAbinash
// Space Complexity: O(n)

#include <queue>
using namespace std;

class SmallestInfiniteSet {
 public:
   priority_queue<int, vector<int>, greater<int>> pq;
   vector<bool> avail;
   SmallestInfiniteSet() {
      for (int i = 1; i <= 1000; ++i) pq.push(i);
      avail = vector<bool>(1001, true);
   }

   int popSmallest() {
      int smallest_element = pq.top();
      pq.pop();
      avail[smallest_element] = false;
      return smallest_element;
   }

   void addBack(int num) {
      if (avail[num] == false) {
         pq.push(num);
         avail[num] = true;
      }
   }
};
