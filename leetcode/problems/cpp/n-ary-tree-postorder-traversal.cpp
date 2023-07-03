// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    vector<int> trav;
    void post_order(Node* root) {
        if (root == NULL) return;
        for (auto& n : root->children) {
            post_order(n);
        }
        trav.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        post_order(root);
        return trav;
    }
};