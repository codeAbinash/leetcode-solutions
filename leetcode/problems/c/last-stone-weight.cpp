// by @codeAbinash
// Time : O(n * log(n))
// Space : O(n)

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
 public:
   int lastStoneWeight(vector<int>& stones) {
      make_heap(begin(stones), end(stones));
      while (stones.size() > 1) {
         pop_heap(begin(stones), end(stones));
         int y = stones.back();
         stones.pop_back();
         pop_heap(begin(stones), end(stones));
         int x = stones.back();
         stones.pop_back();
         if (x != y) {
            stones.push_back(y - x);
            push_heap(begin(stones), end(stones));
         }
      }
      return stones.empty() ? 0 : stones.back();
   }
};
