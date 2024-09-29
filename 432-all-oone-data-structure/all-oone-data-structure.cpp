class AllOne {
public:
    AllOne() {
        mp.clear();
    }
    
    void inc(string key) {
        int n = mp[key];
        mp[key]++;
        s.erase({n, key});
        s.insert({n+1, key});
    }
    
    void dec(string key) {
        int n = mp[key];
        mp[key]--;
        s.erase({n, key});
        if(mp[key]>0) s.insert({n-1, key});
        else mp.erase(key);
    }
    
    string getMaxKey() {
        if(!s.empty()) return s.rbegin()->second;
        else return "";
    }
    
    string getMinKey() {
        if(!s.empty()) return s.begin()->second;
        else return "";
    }
private:  
    unordered_map<string,int> mp;
    set<pair<int, string>> s;
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */