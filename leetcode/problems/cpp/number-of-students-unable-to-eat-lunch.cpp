#include "deque"
#include "vector"

using namespace std;

class Solution {
 public:
   int countStudents(vector<int>& students, vector<int>& sandwiches) {
      deque<int> q(students.begin(), students.end());
      int i = 0, j = 0;
      while (q.size() != 0 && j != q.size()) {
         if (q.front() != sandwiches[i]) {
            q.push_back(q.front());
            j++;
         } else {
            j = 0;
            i++;
         }
         q.pop_front();
      }
      return q.size();
   }
};
