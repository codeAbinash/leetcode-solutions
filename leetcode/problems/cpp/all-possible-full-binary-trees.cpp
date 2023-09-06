// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "unordered_map"
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

// Recursive
class Solution {
	unordered_map<int, vector<TreeNode*>> memo;
public:
	vector<TreeNode*> allPossibleFBT(int n) {
		if(n % 2 == 0)
			return {};
		if(n == 1)
			return {new TreeNode(0)};
		if(memo.find(n) != memo.end())
			return memo[n];

		vector<TreeNode*> ans;
		for(int i = 0; i < n; i++) {
			vector<TreeNode*> left = allPossibleFBT(i);
			vector<TreeNode*> right = allPossibleFBT(n - i - 1);
			for(auto l : left) {
				for(auto r : right) {
					TreeNode* root = new TreeNode(0);
					root->left = l;
					root->right = r;
					ans.push_back(root);
				}
			}
		}
		return ans;
	}
};


// Iterative
class Solution {
public:
	vector<TreeNode*> allPossibleFBT(int n) {
		if(n % 2 == 0)
			return {};
		vector<vector<TreeNode*>> dp(n + 1);
		dp[1] = {new TreeNode(0)};
		for(int i = 3; i <= n; i += 2) {
			for(int j = 0; j < i; j++) {
				for(auto l : dp[j]) {
					for(auto r : dp[i - j - 1]) {
						TreeNode* root = new TreeNode(0);
						root->left = l;
						root->right = r;
						dp[i].push_back(root);
					}
				}
			}
		}
		return dp[n];
	}
};
