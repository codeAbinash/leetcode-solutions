// by @codeAbinash
// Time : O(n)
// Space : O(1)

class Solution {
public:
  int numberOfSteps(int num) {
    int count = 0;
    while (num) {
      if (num & 1)
        num--;
      else
        num = num >> 1;
      count++;
    }
    return count;
  }
};
