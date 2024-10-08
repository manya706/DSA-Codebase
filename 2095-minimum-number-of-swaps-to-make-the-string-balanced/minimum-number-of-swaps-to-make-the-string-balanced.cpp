class Solution {
public:
    int minSwaps(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[') ans++;
            else if(ans>0) ans--;
        }
        return (ans+1)/2;
    }
};