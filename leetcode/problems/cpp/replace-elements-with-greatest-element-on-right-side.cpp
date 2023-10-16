// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
  vector<int> replaceElements(vector<int>& arr) {
    int size = arr.size();
    int lastMax = -1, num;
    vector<int> ans;
    for (int i = size - 1; i >= 0; i--) {
      if (i == size - 1) {
        lastMax = arr[i];
        arr[i] = -1;
        continue;
      }
      num = arr[i];
      arr[i] = lastMax;
      lastMax = num > arr[i] ? num : arr[i];
    }
    return arr;
  }
};
