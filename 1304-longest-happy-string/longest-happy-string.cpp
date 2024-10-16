class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        string ans="";
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});

        while(!pq.empty()){
            auto [cnt1, char1] = pq.top();
            pq.pop();
            if(ans.size()>1 && ans.back()==char1 && ans[ans.size()-2]==char1){
                if(pq.empty()) break;
                auto [cnt2, char2] = pq.top();
                pq.pop();
                ans += char2;
                if(--cnt2 > 0) pq.push({cnt2,char2});
                pq.push({cnt1, char1});
            }
            else {
                ans+=char1;
                if(--cnt1 > 0 ) pq.push({cnt1, char1});
            }
        }
        return ans;
    }
};