class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map <int, int > map;
      int rem;
     
      for (int i = 0; i < nums.size(); i++){
         rem = target - nums[i];
         if (map.find(rem) != map.end())
            return  {map[rem] , i};
         else
            map[nums[i]] = i;
      }
      return { -1, -1 };
   }
};
