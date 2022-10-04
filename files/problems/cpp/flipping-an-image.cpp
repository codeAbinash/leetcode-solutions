// by @codeAbinash

class Solution {
   public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& im : image) {
            reverse(im.begin(), im.end());
            for(auto &pixel : im){
                pixel = !pixel;
            }
        }
        return image;
    }
};