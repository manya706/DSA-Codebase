class LRUCache {
public:
    class node {
        public: 
            int key;
            int val;
            node* prev;
            node* next;
            node(int _key, int _val){
                key = _key;
                val = _val;
            }
    };
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    int capacity;
    unordered_map<int, node*> mp;
    LRUCache(int cap) {
        capacity = cap;
        head->next = tail;
        tail->prev = head; // showing that its doubly linked list
    }

    void addnode(node* curr){
        node* temp = head->next;
        curr->next = temp;
        curr->prev = head;
        head->next = curr;
        temp->prev = curr;
    }
    
    void deletenode(node* curr){
        node* delnext = curr->next;
        node* delprev = curr->prev;
        delnext->prev = delprev;
        delprev->next = delnext;
    }

    int get(int key) {
        if(mp.find(key)!=mp.end()){
            node* newnode = mp[key];
            int res = newnode->val;
            deletenode(newnode); // delete previous access
            addnode(newnode); // add new access, after head
            mp[key] = head->next;
            return newnode->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            node* existingkey = mp[key];
            mp.erase(key);
            deletenode(existingkey);
        }
        if(capacity==mp.size()){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        mp[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */