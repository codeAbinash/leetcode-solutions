// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int score = 0;
        for (auto& op : operations) {
            if (op == "C") {
                record.pop();
            } else if (op == "D") {
                record.push(record.top() * 2);
            } else if (op == "+") {
                int last = record.top();
                record.pop();
                int p_last = record.top();
                record.push(last);
                record.push(last + p_last);
            } else {
                record.push(stoi(op));
            }
        }
        while (!record.empty()) {
            score += record.top();
            record.pop();
        }
        return score;
    }
};