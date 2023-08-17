// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
#include "stack"
#include "algorithm"
using namespace std;

class Solution {
public:
   string decodeString(string s) {
      stack<char> st;
      for (auto ch : s) {
         if (ch == ']') {
            // pop till '[' and store in tmp
            string tmp = "";
            while (st.top() != '[')
               tmp.push_back(st.top()), st.pop();
            st.pop();
            reverse(tmp.begin(), tmp.end());

            // Extract number from stack
            string num_str = "";
            while (!st.empty() && isdigit(st.top()))
               num_str.push_back(st.top()), st.pop();
            reverse(num_str.begin(), num_str.end());
            int digit = stoi(num_str);

            // Repeat tmp digit times
            while (digit--)
               for (auto ch : tmp) st.push(ch);

         } else
            st.push(ch);
      }

      // pop remaining elements from stack
      string result = "";
      while (!st.empty())
         result.push_back(st.top()), st.pop();
      reverse(result.begin(), result.end());

      return result;
   }
};