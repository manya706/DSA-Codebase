class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    ans+=1;
                }
            }
        }
        int sol = ans+st.size();
        return sol;
    }
};