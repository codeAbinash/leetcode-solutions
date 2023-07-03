// by @codeAbinash

bool matchString(string &a, string &b) {
    int lena = a.length(), lenb = b.length();
    if (lenb < lena) return false;
    int len = min(lena, lenb);
    for (int i = 0; i < len; i++)
        if (a[i] != b[i]) return false;
    return true;
}

class Solution {
   public:
    int countPrefixes(vector<string> &words, string s) {
        int count = 0;
        for (auto &str : words)
            if (matchString(str, s)) count++;
        return count;
    }
};

// Another Solution by @codeAbinash
class Solution {
   public:
    int countPrefixes(vector<string> &words, string s) {
        int count = 0;
        for (auto &w : words)
            if (s.find(w) == 0) count++;
        return count;
    }
};
