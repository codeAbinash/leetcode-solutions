// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        int size = prices.size();
        for (int i = size - 1; i >= 0; i--) {
            while (s.size() && prices[i] < s.top()) s.pop();
            int tmp = prices[i];
            if (s.size()) prices[i] -= s.top();
            s.push(tmp);
        }
        return prices;
    }
};