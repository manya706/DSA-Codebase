class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int lc=0, rc=0;
        stack<int> st;
        for(auto i:s){
            if(i=='(' ){
                lc++;
            }
            else if(i==')'){
               rc++;
            }
            if(lc<rc){
                rc--;
                continue;
            }
            else{
                st.push(i);
            }
        }
        while(!st.empty()){
            char x = st.top();
            st.pop();
            if(lc>rc && x=='(') lc--;
            else ans+=x;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};