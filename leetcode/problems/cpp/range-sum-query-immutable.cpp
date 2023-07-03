// by @codeAbinash

using namespace std;
class NumArray {
    vector<int> nums;
   public:
    NumArray(vector<int>& nums) { this->nums = nums; }
    int sumRange(int left, int right) {
        return accumulate(this->nums.begin() + left, this->nums.begin() + right + 1, 0);
    }
};