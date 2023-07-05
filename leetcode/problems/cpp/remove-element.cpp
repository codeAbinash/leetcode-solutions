// by @codeAntu
// time complexity: O(n)
// space complexity: O(1)

class Solution {
public:
   int removeElement(vector<int>& nums, int val) {
      int j = 0;
      for (int i = 0; i < nums.size(); i++)
      {
         if( nums[i] != val){
            nums[j] =  nums[i];
            j++;
         }
      }
      return j;
   }
};
