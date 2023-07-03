#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;

int main() {
    Solution s;
    return 0;
}
class Solution {
   public:
    int maximum69Number(int num) {
        string number = to_string(num);
        for (int i = 0; i < number.length(); i++)

            if (number[i] == '6') {
                number[i] = 9;
                break;
            }
        return stoi(number);
    }
};
