#include <algorithm>
#include <unordered_set>

#include "vector"

using namespace std;

// by @codeAbinash
// Time : O(n log n)
// Space : O(n)
class Solution {
 public:
   int longestConsecutive(vector<int>& nums) {
      if (nums.empty()) return 0;

      sort(nums.begin(), nums.end());

      int max_len = 0;
      int cur_len = 1;
      for (int i = 1; i < nums.size(); i++) {
         if (nums[i] == nums[i - 1]) {
            continue;
         }
         if (nums[i] == nums[i - 1] + 1) {
            cur_len++;
         } else {
            max_len = max(max_len, cur_len);
            cur_len = 1;
         }
      }

      return max(max_len, cur_len);
   }
};


// by @codeAbinash
// Time : O(n)
// Space : O(n)
class Solution2 {
 public:
   int longestConsecutive(vector<int>& nums) {
      if (nums.empty()) return 0;

      unordered_set<int> num_set;

      for (int num : nums) num_set.insert(num);

      int max_len = 0;
      for (int num : num_set) {
        // Check if the current number is the start of the sequence
         if (num_set.find(num - 1) == num_set.end()) {
            int cur_num = num;
            int cur_len = 1;

            // Check the next numbers in the sequence
            while (num_set.find(cur_num + 1) != num_set.end()) {
               cur_num++;
               cur_len++;
            }

            max_len = max(max_len, cur_len);
         }
      }

      return max_len;
   }
};
