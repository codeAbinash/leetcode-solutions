// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
using namespace std;

class MyStack {
   queue<int> q;

  public:
   MyStack() {}

   void push(int x) {
      int size = q.size();
      q.push(x);
      while (size--) {
         q.push(q.front());
         q.pop();
      }
   }

   int pop() {
      int top = q.front();
      q.pop();
      return top;
   }

   int top() {
      return q.front();
   }

   bool empty() {
      return q.empty();
   }
};
