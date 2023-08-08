// by @codeAbinash

#include "string"
#include "vector"
using namespace std;

inline short to_short(char ch) {
   return ch - '0';
}

inline char to_char(short i) {
   return  i + '0';
}

class Solution {
public:
   string multiply(string num1, string num2) {
      if (num1 == "0" || num2 == "0") return "0";
      int n = num1.length(), m = num2.length();
      vector<short> ans(m + n, 0);

      for (int j = m - 1;j >= 0;j--) {
         for (int i = n - 1;i >= 0;i--)
            ans[i + j + 1] += to_short(num2[j]) * to_short(num1[i]);

         for (int k = ans.size() - 1;k > 0;k--) {
            short num = ans[k];
            ans[k] = num % 10;
            ans[k - 1] += num / 10;
         }
      }

      int i = 0;
      while (i < ans.size() && ans[i] == 0) i++;

      string res;
      while (i < ans.size()) {
         res.push_back(to_char(ans[i]));
         i++;
      }
      return res;
   }
};