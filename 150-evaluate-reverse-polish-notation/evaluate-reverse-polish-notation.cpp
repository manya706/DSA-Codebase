class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // stack
        stack<int> st;
        // if operation -- take out top 2 elements and put in the result
        // if operand -- convert to int and push into stack
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-"){
                int m = st.top();
                st.pop();
                int n = st.top();
                st.pop();
                int newnum =0;
                if(tokens[i]=="+") newnum = n+m;
                else if(tokens[i]=="*") newnum = n*m;
                else if(tokens[i]=="/") newnum = n/m;
                else if(tokens[i]=="-") newnum = n-m;
                st.push(newnum);
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};