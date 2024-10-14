class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq (piles.begin(), piles.end());
        int ans=0;
        while(k>0){
            int t = pq.top();
            pq.pop();
            pq.push(t-(t/2));
            k--;
        }
        while(!pq.empty()){
            ans+=pq.top();
            cout<<pq.top();
            pq.pop();
        }
        return ans;
    }
};