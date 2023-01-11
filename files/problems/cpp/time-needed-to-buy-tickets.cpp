// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for (auto& t : tickets) q.push(t);
        int time = 0;
        int index = 0;
        while (!q.empty()) {
            int first = q.front();
            q.pop();
            first--;
            time++;
            if (first != 0) q.push(first);
            if (k == 0 && first == 0) break;
            if (k == 0) k += q.size();
            k--;
        }
        return time;
    }
};