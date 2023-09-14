// by @codeAbinash
// Time : O(n)

#include "string"
#include "vector"
#include "list"
using namespace std;


// Using a list
class BrowserHistory {
public:
   list<string>history;
   list<string>::iterator current;

   BrowserHistory(string homepage) {
      history.push_back(homepage);
      current = history.begin();
   }

   void visit(string url) {
      auto del = current;
      del++;
      history.erase(del, history.end());
      history.push_back(url);
      current++;
   }

   string back(int steps) {
      while (current != history.begin() && steps--)
         current--;
      return *current;
   }

   string forward(int steps) {
      while (current != --history.end() && steps--)
         current++;
      return *current;
   }
};


// Using a vector
class BrowserHistory {
   vector<string> history;
   int current;
public:
   BrowserHistory(string homepage) {
      history.push_back(homepage);
      current = 0;
   }

   void visit(string url) {
      while (history.size() - 1 > current)
         history.pop_back();
      history.push_back(url);
      current += 1;
   }

   string back(int steps) {
      while (steps-- && current > 0)
         current--;
      return history[current];
   }

   string forward(int steps) {
      while (steps-- && history.size() - 1 > current)
         current++;
      return history[current];
   }
};
