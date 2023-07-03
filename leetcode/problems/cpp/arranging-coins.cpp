// by @codeAbinash
// Time Complexity : O(log n)
// Space Complexity : O(1)

class Solution {
   public:
    int arrangeCoins(int n) {
        long long int low = 1;
        long long int high = n, mid;
        long long ans, countCoins;

        while (low <= high) {
            mid = low + (high - low) / 2;
            countCoins = mid * (mid + 1) / 2;
            if (countCoins > n)
                high = mid - 1;
            else if (countCoins < n) {
                ans = mid;
                low = mid + 1;
            } else
                return mid;
        }
        
        return ans;
    }
};