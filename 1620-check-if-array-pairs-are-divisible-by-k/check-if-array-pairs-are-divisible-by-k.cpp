class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k,0);
        for(int n: arr){
            int rem = n%k;
            if(rem<0) rem += k;
            freq[rem] ++;
        }
        if(freq[0]%2!=0) return false;
        for(int i=1; i<=k/2; i++){
            if(freq[i]!=freq[k-i]) return false;
        }
        return true;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();