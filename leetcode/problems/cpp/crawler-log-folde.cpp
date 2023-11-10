// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
using namespace std;

class Solution {
  public:
   int minOperations(vector<string>& logs) {
      int depth = 0;
      for (auto& log : logs) {
         if (log == "./") continue;
         if (log == "../") {
            if (depth) depth--;
         } else
            depth++;
      }
      return depth;
   }
};
