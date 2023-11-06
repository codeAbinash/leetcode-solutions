// by @codeAbinash

#include "cstdlib"
#include "vector"
using namespace std;

class Solution {
   int n;
   vector<int> original;

  public:
   Solution(vector<int>& nums) {
      n = nums.size();
      original = nums;
   }

   vector<int> reset() {
      return original;
   }

   vector<int> shuffle() {
      vector<int> shuffled = original;
      for (int i = 0; i < n; i++) {
         int j = rand() % n;
         swap(shuffled[i], shuffled[j]);
      }
      return shuffled;
   }
};
