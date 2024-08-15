class Solution {
public:
    void genpalindrome(string &s, vector<vector<bool>>& pal){
        int n = s.size();
        for(int i=0;i<n;i++){
            pal[i][i] = true;
        }
        for(int i=2;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                int l = i+j-1;
                if(s[j]==s[l] && (i==2 || pal[j+1][l-1])){
                    pal[j][l]=true;
                }
            }
        }
    }
    int minCut(string s)
    {
        // code here
        if (s.empty())
        return 0;
        int n = s.size();
        vector<vector<bool> > pal(n, vector<bool>(n, false));
     
        genpalindrome(s, pal);
        vector<int> minCutDp(n, INT_MAX);
     
        minCutDp[0] = 0;
        for(int i=1;i<n;i++){
            if(pal[0][i]){
                minCutDp[i] = 0;
            }
            else{
                for(int j=i;j>=1;j--){
                    if(pal[j][i]){
                        if(minCutDp[j-1]+1 < minCutDp[i]){
                            minCutDp[i] = minCutDp[j-1]+1;
                        }
                    }
                }
            }
        }
        return minCutDp[n-1];  
    }
};