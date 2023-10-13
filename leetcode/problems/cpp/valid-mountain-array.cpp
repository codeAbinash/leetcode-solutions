// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
  bool validMountainArray(vector<int>& arr) {
    int i = 1;
    int n = arr.size();
    while (i < n && arr[i] > arr[i - 1]) i++;
    if (i == 1 || i == n) return false;
    while (i < n && arr[i] < arr[i - 1]) i++;
    return i == n;
  }
};
