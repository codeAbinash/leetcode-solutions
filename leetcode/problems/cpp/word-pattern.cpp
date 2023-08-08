// by @codeAbinash

#include "iostream"
#include "map"

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(s);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (i == n || p2i[pattern[i]] != w2i[word])
                return false;
            p2i[pattern[i]] = w2i[word] = i + 1;
        }
        return i == n;
    }
};