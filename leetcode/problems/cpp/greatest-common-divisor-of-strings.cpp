// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
#include "numeric"
using namespace std;

class Solution {
public:
   string gcdOfStrings(string str1, string str2) {
      int l1 = str1.length(), l2 = str2.length();
      if (str1 + str2 == str2 + str1)
         return str1.substr(0, gcd(l1, l2));
      return "";
   }
};