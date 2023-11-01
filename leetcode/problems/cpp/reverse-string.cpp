// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "algorithm"
#include "vector"
using namespace std;

class Solution {
  public:
   void reverseString(vector<char>& s) {
      reverse(s.begin(), s.end());
   }
};
