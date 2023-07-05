// by @codeAntu
// time complexity: O(n)
// space complexity: O(1)


class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
      int k = 1;
      for (int i = 0; i < nums.size() - 1; i++)
      {
         if (nums[i] != nums[i + 1]) {
            nums[k] = nums[i + 1];
            k++;
         }
      }
      return k;
   }
};
