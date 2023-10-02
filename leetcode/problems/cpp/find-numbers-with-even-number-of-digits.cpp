// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "cmath"
using namespace std;


class Solution {
public:
  int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
      count += isEvenDigit(num);
    }
    return count;
  }
  int isEvenDigit(int num) {
    int count = 0;
    while (num) {
      count++;
      num /= 10;
    }
    return count % 2 == 0;
  }
};


class Solution {
public:
  int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
      bool even = true;
      while (num) {
        even = !even;
        num /= 10;
      }
      count += even;
    }
    return count;
  }
};


// Using Log10
class Solution {
public:
  int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int num : nums)
      count += (int)log10(num) & 1;
    return count;
  }
};
