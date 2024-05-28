class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        // if(maxCost==0) return 1;
        int ans=0, m=0, cs=0;
        // taking s[i]-t[i] and then check how many times i can use maxcost
        for(int i=0;i<s.length();i++){
            m += abs((s[i]) - (t[i]));
            // cout<<m<<endl;
            
            while(m>maxCost){
                m -= abs((s[cs]) - (t[cs]));
                cs++;
            }
            if(i-cs+1>ans){
                ans = i-cs+1;
            }
        }
        return ans;
    }
};