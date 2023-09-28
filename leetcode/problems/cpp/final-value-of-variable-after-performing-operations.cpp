// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "string"
using namespace std;

class Solution {
public:
   int finalValueAfterOperations(vector<string>& operations) {
      int result = 0;
      for (auto& op : operations) {
         result += (op[1] == '+') ? 1 : -1;
      }
      return result;
   }
};
