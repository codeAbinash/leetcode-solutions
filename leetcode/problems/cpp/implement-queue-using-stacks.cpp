// by @codeAbinash

#include "stack"
using namespace std;

class MyQueue {
  public:
   stack<int> input, output;
   MyQueue() {}

   void push(int x) {
      input.push(x);
   }

   int pop() {
      int top = peek();
      output.pop();
      return top;
   }

   int peek() {
      if (output.empty())
         while (input.size())
            output.push(input.top()), input.pop();
      return output.top();
   }

   bool empty() {
      return input.empty() && output.empty();
   }
};
