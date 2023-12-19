// by @codeAbinash
// Time : O(n * k)
// Space : O(n)

#include <algorithm>
#include <cmath>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
 public:
   long long pickGifts(vector<int>& gifts, int k) {
      make_heap(begin(gifts), end(gifts));
      while (k--) {
         pop_heap(begin(gifts), end(gifts));
         gifts.back() = sqrt(gifts.back());
         push_heap(begin(gifts), end(gifts));
      }
      return accumulate(gifts.begin(), gifts.end(), 0LL);
   }
};
