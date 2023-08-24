#include "string"
#include "vector"
using namespace std;


class Solution {
public:
   string intToRoman(int num) {
      int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
      int valSize = sizeof(values) / sizeof(int);
      string symbols[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
      string result = "";

      for (int i = 0; i < valSize; i++)
         while (num >= values[i]) {
            num -= values[i];
            result += symbols[i];
         }

      return result;
   }
};