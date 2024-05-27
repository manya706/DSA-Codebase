class Solution {
public:
    string reverseVowels(string s) {
        string ans="";
        stack<char> st;
        for(char i: s){
            if(i=='a' || i=='i' || i=='o' || i=='u' || i=='e' || i=='A'  || i=='E' || i=='I' || i=='O' || i=='U'){
                st.push(i);
            }

        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e' || s[i]=='A'  || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                ans += st.top();
                st.pop();
            }
            else ans+=s[i];
        }
        return ans;
    }
};