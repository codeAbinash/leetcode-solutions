// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "iostream"
using namespace std;

class Solution {
public:
   vector<int> decode(vector<int>& encoded, int first) {
      int size = encoded.size();
      vector<int> result(size + 1);
      result[0] = first;
      for (int i = 0; i < size; i++)
         result[i + 1] = result[i] ^ encoded[i];
      return result;
   }
};