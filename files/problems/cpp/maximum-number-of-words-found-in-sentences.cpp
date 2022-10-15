// by @codeAbinash

class Solution {
   public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWordCount = 0;
        for (auto& s : sentences) {
            int wordCount = count(s.begin(), s.end(), ' ') + 1;
            if(wordCount > maxWordCount)
                maxWordCount = wordCount;
        }
        return maxWordCount;
    }
};