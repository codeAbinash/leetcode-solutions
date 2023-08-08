// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
using namespace std;


class Solution {
public:
   string addBinary(string a, string b) {
      int a_len = a.length();
      int b_len = b.length();
      int carry = 0;
      string ans;
      while (a_len > 0 || b_len > 0 || carry > 0) {
         if (a_len > 0) carry += a[--a_len] - '0';
         if (b_len > 0) carry += b[--b_len] - '0';
         ans.push_back(carry % 2 + '0');
         carry /= 2;
      }

      reverse(begin(ans), end(ans));
      return ans;
   }
};
