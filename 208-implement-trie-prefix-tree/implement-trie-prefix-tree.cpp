class TrieNode {
    public:
        bool iscomp;
        TrieNode* children[26];

        TrieNode(){
            iscomp = false;
            memset(children,0,sizeof(children));
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
        for(char c:word){
            int id = c-'a';
            if(node->children[id]==NULL) node->children[id] = new TrieNode();
            node = node->children[id];
        }
        node->iscomp = true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char c:word){
            int id = c-'a';
            if(node->children[id]==NULL) return false;
            node = node->children[id];
        }
        return node->iscomp;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char c:prefix){
            int id = c-'a';
            if(node->children[id]==NULL) return false;
            node = node->children[id];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */