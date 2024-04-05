class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<char> stack;
        for(char c:s){
            if(!stack.empty() && abs(c-stack.top())==32){
                stack.pop();
            }
            else stack.push(c);
        }
        string res;
        while(!stack.empty()) {
            res=stack.top()+res;
            stack.pop();
        }
        return res;
    }
};