// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
#include "stack"
#include "vector"
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* recoverFromPreorder(string S) {
        vector<TreeNode*> st;
        for (int i = 0, level, val; i < S.length();) {
            for (level = 0; S[i] == '-'; i++) level++;
            for (val = 0; i < S.length() && S[i] != '-'; i++)
                val = val * 10 + S[i] - '0';
            TreeNode* node = new TreeNode(val);
            while (st.size() > level) st.pop_back();
            if (!st.empty())
                if (!st.back()->left) st.back()->left = node;
                else st.back()->right = node;
            st.push_back(node);
        }
        return st[0];
    }
};
