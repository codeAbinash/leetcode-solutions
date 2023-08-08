// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   double average(vector<int>& salary) {
      double sum = 0;
      int min = salary[0];
      int max = salary[0];

      for (auto i : salary) {
         if (i < min) min = i;
         if (i > max) max = i;
      }

      for (auto i : salary)
         sum += i;
      return (sum - min - max) / (salary.size() - 2);
   }
};