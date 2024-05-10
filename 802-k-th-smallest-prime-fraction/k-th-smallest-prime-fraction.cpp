class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // priority queue
        // greedy method to get kth
        // most optimized : binary search
        vector<int> v;
        int n = arr.size();
        double l=0, r=n-1, mid;
        
        while(l<=r){
            mid = l + (r-l)/2;
            int j=1, total =0, num=0, den =0;
            double maxFr = 0;
            for(int i=0;i<n;++i){
                while(j<n && arr[i]>=arr[j]*mid) ++j;
            
            total +=n-j;
        
            if(j<n && maxFr < arr[i]* 1.0/arr[j]){
                maxFr = arr[i] * 1.0/arr[j];
                num = i; den =j;
                }
            }
        
            if(total==k){
                v = {arr[num],arr[den]};
                break;
            }
             if (total > k) {
                r = mid;
            } else {
                l = mid;
            }
        }
    return v;
    }
};