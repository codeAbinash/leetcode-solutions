#include "string"
#include "vector"
using namespace std;

// by @codeAbinash
// Time : O(n)
// Space : O(n)
class Solution {
  public:
   string longestCommonPrefix(vector<string>& strs) {
      if (strs.size() == 0) return "";
      string prefix = strs[0];
      for (int i = 1; i < strs.size(); i++) {
         int j = 0;
         while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j])
            j++;
         prefix = prefix.substr(0, j);
      }
      return prefix;
   }
};

// by @codeAbinash
// Time : O(n)
// Space : O(n)
class Solution {
  public:
   string longestCommonPrefix(vector<string>& strs) {
      if (strs.empty()) return "";                           // If the vector is empty, return empty string
      string prefix = strs[0];                               // Initialize prefix with first string
      for (string s : strs)                                  // Iterate over the vector
         while (s.find(prefix) != 0)                         // While the prefix is not a substring of the current string
            prefix = prefix.substr(0, prefix.length() - 1);  // Remove the last character from prefix
      return prefix;                                         // Return prefix
   }
};

// by @codeAntu
// Time : O(n)
// Space : O(n)
class Solution {
  public:
   string longestCommonPrefix(vector<string>& strs) {
      string tmp = "", result = strs[0];
      for (int i = 1; i < strs.size(); i++) {
         tmp = "";
         for (int j = 0; j < strs[i].length() || j < result.length(); j++) {
            if (result[j] != strs[i][j])
               break;
            tmp += (strs[0][j]);
         }
         result = tmp;
      }
      return result;
   }
};
