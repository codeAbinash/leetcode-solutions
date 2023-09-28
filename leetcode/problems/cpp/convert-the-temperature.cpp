// by @codeAbinash
// Time : O(1)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   vector<double> convertTemperature(double celsius) {
      return { celsius + 273.15, celsius * 1.80 + 32.00 };
   }
};
