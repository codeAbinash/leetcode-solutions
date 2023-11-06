// by @codeAbinash

#include "algorithm"
#include "stack"
#include "vector"
using namespace std;

// Using Linked List
class MinStack {
   typedef struct node {
      int val;
      int minTillNow;
      node* next;
   } node;
   node* topN;

  public:
   MinStack() : topN(nullptr) {}

   void push(int val) {
      node* n = new node;
      n->val = n->minTillNow = val;
      n->next = nullptr;

      if (topN == nullptr) {
         topN = n;
         return;
      }

      n->minTillNow = min(topN->minTillNow, val);
      n->next = topN;
      topN = n;
   }

   void pop() {
      node* temp = topN;
      topN = topN->next;
      delete temp;
   }

   int top() {
      return topN->val;
   }

   int getMin() {
      return topN->minTillNow;
   }
};

// Using Vector and stack
class MinStack {
  public:
   stack<int> s1, s2;
   MinStack() {}

   void push(int val) {
      if (s2.empty() || val <= s2.top())
         s2.push(val);
      s1.push(val);
   }

   void pop() {
      if (s1.top() == s2.top())
         s2.pop();
      s1.pop();
   }

   int top() {
      return s1.top();
   }

   int getMin() {
      return s2.top();
   }
};
