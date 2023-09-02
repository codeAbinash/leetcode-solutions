// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
#include "vector"
using namespace std;


class Solution {
public:
   int numTrees(int n) {
      vector<int>numbers(n + 1, 0);
      numbers[1] = numbers[0] = 1;
      for (int i = 2;i <= n;i++)
         for (int j = 0;j < i;j++)
            numbers[i] += numbers[j] * numbers[i - j - 1];
      return numbers[n];
   }
};