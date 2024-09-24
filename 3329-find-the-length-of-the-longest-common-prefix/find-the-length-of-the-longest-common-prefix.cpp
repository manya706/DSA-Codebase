class TrieNode{
public:
    bool isCompleteWord;
    TrieNode* children[10];

    TrieNode() {
        isCompleteWord = false; // when the word is complete (mark that node as true)
        memset(children, 0, sizeof(children)); // for 26 possible Childrens (for next letter)
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word){
            int idx = ch - '0';
            if(node->children[idx]==NULL) node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isCompleteWord = true;
    }
    
    int search(string word) {
        TrieNode* node = root;
        int len=0;
        for(char ch : word){
            int idx = ch - '0';
            if(node->children[idx]==NULL) return len;
            node = node->children[idx];
            len++;
        }
        return len;
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie trie = Trie();
        for(int x : arr2){
            trie.insert(to_string(x));
        }
        int maxlen = 0;
        for(int x: arr1){
            maxlen = max(maxlen, trie.search(to_string(x)));
        }
        return maxlen;
    }
};