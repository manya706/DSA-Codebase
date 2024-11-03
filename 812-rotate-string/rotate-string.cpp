class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s+s;
        int n = s.length();
        int m = goal.length();
        return (n==m) && temp.find(goal)!=-1;
    }
};