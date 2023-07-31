// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "string"
#include "vector"
using namespace std;


class Solution {
public:
   int calPoints(vector<string>& operations) {
      vector<int> scores;
      int sum = 0, len = operations.size();
      for (int i = 0; i < len; i++) {
         if (operations[i] == "C") {
            sum -= scores.back();
            scores.pop_back();
         } else if (operations[i] == "D") {
            scores.push_back(scores.back() * 2);
            sum += scores.back();
         } else if (operations[i] == "+") {
            scores.push_back(scores.back() + scores[scores.size() - 2]);
            sum += scores.back();
         } else {
            scores.push_back(stoi(operations[i]));
            sum += scores.back();
         }
      }
      return sum;
   }
};