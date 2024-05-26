class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s=str1, t =str2;
        string s1 = t;
        while(true){
            while(t.size()<s.size()) t+= t;
            for(int i=0;i<s.size();++i){
                if(s[i]!=t[i]) return "";
            }
            string t1="";
            for(int i=s.size();i<t.size();++i) t1+=t[i];
            if(t1=="") return s1;
            s=s1;t=t1;s1=t1;
        }
    }
};