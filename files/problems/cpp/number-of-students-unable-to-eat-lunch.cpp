// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int> q(students.begin(), students.end());
        int i = 0;
        int count = 0;
        while (!q.empty()) {
            int current = q.front();
            q.pop_front();
            if (current != sandwiches[i]) {
                count++;
                q.push_back(current);
            } else {
                count = 0;
                i++;
            }

            if (count == q.size()) break;
        }
        return q.size();
    }
};