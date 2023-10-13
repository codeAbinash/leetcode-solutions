// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "unordered_set"
#include "vector"
using namespace std;

class Solution {
public:
  bool checkIfExist(vector<int>& arr) {
    unordered_set<int> s;
    for (auto num : arr) {
      if
        (s.find(num * 2) != s.end() ||
          (num % 2 == 0 && s.find(num / 2) != s.end()))
        return true;
      s.insert(num);
    }
    return false;
  }
};
