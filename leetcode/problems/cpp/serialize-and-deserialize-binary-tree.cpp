// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
#include "sstream"
#include "string"
#include "vector"

using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
   void serialize(TreeNode *root, ostringstream &out) {
      if (root) {
         out << root->val << ' ';
         serialize(root->left, out);
         serialize(root->right, out);
      } else
         out << "# ";
   }

   TreeNode *deserialize(istringstream &in) {
      string val;
      in >> val;
      if (val == "#")
         return nullptr;
      TreeNode *root = new TreeNode(stoi(val));
      root->left = deserialize(in);
      root->right = deserialize(in);
      return root;
   }

  public:
   // Encodes a tree to a single string.
   string serialize(TreeNode *root) {
      ostringstream out;
      serialize(root, out);
      return out.str();
   }

   // Decodes your encoded data to tree.
   TreeNode *deserialize(string data) {
      istringstream in(data);
      return deserialize(in);
   }
};
