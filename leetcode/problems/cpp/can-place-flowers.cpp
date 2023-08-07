// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
   bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int size = flowerbed.size();
      for (int i = 0; i < size; i++) {
         bool condition = flowerbed[i] == 0 // empty
            && (i == 0 || flowerbed[i - 1] == 0) // left empty
            && (i == size - 1 || flowerbed[i + 1] == 0); // right empty

         if (condition) {
            flowerbed[i] = 1;
            n--;
         }
      }
      return n <= 0;
   }
};