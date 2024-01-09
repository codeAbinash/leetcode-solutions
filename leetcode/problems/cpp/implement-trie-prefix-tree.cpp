// by @codeAbinash
// Time : O(n), n = length of word
// Space : O(n), 

#include <string>
using namespace std;

struct TrieNode {
   TrieNode* children[26]{};
   bool isEnd;
};

class Trie {
 public:
   TrieNode* root;

   Trie() { root = new TrieNode(); }

   void insert(string word) {
      TrieNode* node = root;
      for (char c : word) {
         if (node->children[c - 'a'] == nullptr) {
            node->children[c - 'a'] = new TrieNode();
         }
         node = node->children[c - 'a'];
      }
      node->isEnd = true;
   }

   bool search(string word) {
      TrieNode* node = root;
      for (char c : word) {
         if (node->children[c - 'a'] == nullptr) {
            return false;
         }
         node = node->children[c - 'a'];
      }
      return node->isEnd;
   }

   bool startsWith(string prefix) {
      TrieNode* node = root;
      for (char c : prefix) {
         if (node->children[c - 'a'] == nullptr) {
            return false;
         }
         node = node->children[c - 'a'];
      }
      return true;
   }
};
