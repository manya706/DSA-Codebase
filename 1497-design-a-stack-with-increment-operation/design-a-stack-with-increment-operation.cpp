class CustomStack {
public:
    vector<int> v;
    int cap;
    int n=0;
    CustomStack(int maxSize) {
        this->cap = maxSize;
    }
    
    void push(int x) {
        if(n==cap){
            return;
        }
        v.push_back(x);
        
        n++;
    }
    
    int pop() {
        
        if(n==0) return -1;
        int t = v[n-1];
        v.erase(v.begin()+n);
        n--;
        return t;
    }
    
    void increment(int k, int val) {
        if(n<=k){
            for(int i=0;i<n;i++){
                v[i]+=val;
            }
        } else {
            for(int i=0;i<k;i++){
                v[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */