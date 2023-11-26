// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
#include "unordered_map"
#include "vector"
using namespace std;

class Solution {
  public:
   vector<vector<string>> groupAnagrams(vector<string> &strs) {
      unordered_map<unsigned long long, vector<string>> m;
      vector<vector<string>> ret;

      for (auto &str : strs) {
         unsigned long long sum = 0, mul = ULLONG_MAX;
         for (auto &c : str) {
            sum += c;
            mul *= c;
         }
         m[sum * mul].push_back(str);
      }

      for (auto &e : m) ret.push_back(e.second);

      return ret;
   }
};
