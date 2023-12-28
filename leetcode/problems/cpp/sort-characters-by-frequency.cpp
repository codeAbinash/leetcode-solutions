// by @codeAbinash

#include "algorithm"
#include "queue"
#include "string"
#include "unordered_map"
#include "vector"

using namespace std;

class Solution {
public:
  string frequencySort(string s) {
    unordered_map<char, int> freq(26);

    for (char c : s)
      freq[c]++;

    vector<pair<char, int>> freq_vec(26);
    for (auto it : freq)
      freq_vec.push_back(it);

    sort(freq_vec.begin(), freq_vec.end(),
         [](pair<char, int> a, pair<char, int> b) {
           return a.second > b.second;
         });

    string res;
    for (auto it : freq_vec)
      res += string(it.second, it.first);

    return res;
  }
};

// Using Priority Queue
class Solution2 {
public:
  string frequencySort(string s) {
    unordered_map<char, int> freq(26);

    for (char c : s)
      freq[c]++;

    priority_queue<pair<int, char>> pq;

    for (auto it : freq)
      pq.push({it.second, it.first});

    string res;
    while (!pq.empty()) {
      auto it = pq.top();
      pq.pop();
      res += string(it.first, it.second);
    }

    return res;
  }
};

// Sort using lambda function
class Solution3 {
public:
  string frequencySort(string s) {
    unordered_map<char, int> mpp;
    for (char c : s)
      mpp[c]++;

    sort(s.begin(), s.end(), [&](char a, char b) {
      if (mpp[a] != mpp[b])
        return mpp[a] > mpp[b];
      else
        return a < b;
    });
    return s;
  }
};
