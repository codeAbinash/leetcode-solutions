// by @codeAbinash

class Solution {
   public:
    vector<string> binaryTreePaths(TreeNode *root) {
        traverse(root, "");
        return result;
    }
    vector<string> result;
    void traverse(TreeNode *root, string resultStr) {
        if (!root) return;

        resultStr += to_string(root->val);

        if (root->left || root->right) {
            resultStr.push_back('-');
            resultStr.push_back('>');
        }

        if (!root->left && !root->right) {
            result.push_back(resultStr);
            return;
        }

        traverse(root->left, resultStr);
        traverse(root->right, resultStr);
    }
};