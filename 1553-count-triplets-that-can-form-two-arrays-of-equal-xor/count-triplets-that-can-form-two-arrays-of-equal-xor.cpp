class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int c=0;
        for(int i=0;i<arr.size();i++){
            int v = arr[i];
            for(int k=i+1;k<arr.size();k++){
                v ^= arr[k];
                if(v==0) c += k-i;
            }
        }
        return c;
    }
};