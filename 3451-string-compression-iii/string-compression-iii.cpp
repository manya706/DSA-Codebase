class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int n = word.length();
        int c = 1;
        char ch = word[0];
        for(int i=1;i<n;i++){
            if(word[i]==ch && c<9){
                c++;
            }
            else {
                comp.push_back(c+'0');
                comp.push_back(ch);
                ch = word[i];
                c=1;
            }
        }
        comp.push_back(c+'0');
        comp.push_back(ch);
        return comp;
    }
};