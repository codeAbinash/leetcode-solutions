#include <string>

#include "vector"

using namespace std;

class Solution {
 public:
   string encode(vector<string> &strs) {
      string res;
      for (string &str : strs) {
         res += to_string(str.size()) + "#" + str;
      }
      return res;
   }

   vector<string> decode(string &str) {
      vector<string> res;
      int i = 0;
      while (i < str.size()) {
         int j = i;
         while (str[j] != '#') j++;
         int len = stoi(str.substr(i, j - i));
         res.push_back(str.substr(j + 1, len));
         i = j + 1 + len;
      }
      return res;
   }
};