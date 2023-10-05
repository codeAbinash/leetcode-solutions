// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
#include "vector"
using namespace std;


class Solution {
public:
  void duplicateZeros(vector<int>& arr) {
    int zeroCount = count(arr.begin(), arr.end(), 0);
    int size = arr.size();
    int newSize = size + zeroCount;
    arr.resize(newSize);

    int i = size - 1;
    while (i >= 0) {
      if (!arr[i]) zeroCount--;
      if (i + zeroCount < newSize) arr[i + zeroCount] = arr[i];
      if (!arr[i] && i + zeroCount + 1 < newSize) arr[i + zeroCount + 1] = arr[i];
      i--;
    }
    arr.resize(size);
  }
};
