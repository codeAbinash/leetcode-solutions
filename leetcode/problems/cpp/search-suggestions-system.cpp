#include <algorithm>

#include "string"
#include "vector"

using namespace std;

struct TrieNode {
   vector<string> suggestions;
   vector<TrieNode*> children;
   TrieNode() : children(26) {}
};

class Solution {
 public:
   vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
      sort(products.begin(), products.end());
      TrieNode* root = new TrieNode();
      for (string& product : products) {
         TrieNode* curr = root;
         for (char& c : product) {
            if (curr->children[c - 'a'] == nullptr) {
               curr->children[c - 'a'] = new TrieNode();
            }
            curr = curr->children[c - 'a'];
            if (curr->suggestions.size() < 3) {
               curr->suggestions.push_back(product);
            }
         }
      }
      vector<vector<string>> result;
      TrieNode* curr = root;
      for (char& c : searchWord) {
         if (curr != nullptr) {
            curr = curr->children[c - 'a'];
         }
         result.push_back(curr == nullptr ? vector<string>() : curr->suggestions);
      }
      return result;
   }
};
