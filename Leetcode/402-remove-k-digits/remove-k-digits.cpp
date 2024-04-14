class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        stack<char> st;
        for(char d:num){
            while(!st.empty() && k>0 && st.top()>d){
                st.pop();
                k--;
            }
            st.push(d);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        // removing leading zeroes
        while(ans[i]=='0'){
            i++;
        }
        ans.erase(0,i);
        if(ans.length()==0) ans = "0";
        return ans;
    }
};