//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{   public:
    class node {
      public:
          int key;
          int val;
          node * next;
          node * prev;
          node(int _key, int _val) {
            key = _key;
            val = _val;
          }
    };

    node * head = new node(-1, -1);
    node * tail = new node(-1, -1);
    
    int capacity;
    unordered_map < int, node * > m;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        capacity = cap;
        head->next = tail;
        tail->prev = head;
    }
    
    void addnode(node* addnode){
        node* temp= head->next;
        addnode ->next = temp;
        addnode->prev = head;
        head->next = addnode;
        temp->prev = addnode;
    }
    
    void deletenode(node* delnode){
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        // your code here
        if(m.find(key)!=m.end()){
            node * resnode = m[key];
            int res = resnode->val;
            deletenode(resnode);
            addnode(resnode);
            m[key] = head->next;
            return res;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        // your code here 
        if(m.find(key)!=m.end()){
            node* existingkey = m[key];
            m.erase(key);
            deletenode(existingkey);
        }
        if(capacity==m.size()){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        m[key] = head->next;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends