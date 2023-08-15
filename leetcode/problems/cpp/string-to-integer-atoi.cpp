// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "climits"
using namespace std;

class Solution {
public:
   int myAtoi(string s) {
      int i = 0;
      int sign = 1;
      int res = 0;
      while (s[i] == ' ') i++; // skip spaces

      if (s[i] == '-') sign = -1, i++;
      else if (s[i] == '+') i++;;

      while (s[i] >= '0' && s[i] <= '9') {
         long long int tmp = (long long int)res * 10 + (s[i] - '0');
         if (tmp > INT_MAX) {
            if (sign == 1) return INT_MAX;
            else return INT_MIN;
         }
         res = tmp;
         i++;
      }
      return res * sign;
   }
};