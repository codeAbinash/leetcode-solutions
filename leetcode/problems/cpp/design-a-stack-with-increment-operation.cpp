// by @codeAbinash
// Time : O(n)
// Space : O(n)


#include "algorithm"
#include "stack"
#include "vector"
using namespace std;

class CustomStack {
   vector<int> s, inc;
   int maxSize;

  public:
   CustomStack(int maxSize) {
      this->maxSize = maxSize;
   }

   void push(int x) {
      if (s.size() < maxSize) {
         s.push_back(x);
         inc.push_back(0);
      }
   }

   int pop() {
      int i = s.size() - 1;
      if (i < 0) return -1;
      if (i > 0) inc[i - 1] += inc[i];
      int res = s[i] + inc[i];
      s.pop_back();
      inc.pop_back();
      return res;
   }

   void increment(int k, int val) {
      int i = min(k, (int)s.size()) - 1;
      if (i >= 0) inc[i] += val;
   }
};

// Faster

class CustomStack {
  public:
   int arr[1000];
   int count = 0;
   int size = 0;

   CustomStack(int maxSize) {
      size = maxSize;
   }

   void push(int x) {
      if (count < size)
         arr[count++] = x;
   }

   int pop() {
      if (count > 0)
         return arr[--count];
      return -1;
   }

   void increment(int k, int val) {
      for (int i = 0; i < min(k, count); i++)
         arr[i] += val;
   }
};
