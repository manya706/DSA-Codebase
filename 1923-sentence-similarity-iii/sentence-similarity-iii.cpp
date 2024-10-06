class Solution {
public:
    vector<string> getWord(string& senc){
        vector<string> word;
        string w = "";
        for(char c:senc){
            if(c==' '){
                if(!w.empty()){
                    word.push_back(w);
                    w = "";
                }
            } else {
                w+=c;
            }
        }
        if(!w.empty()) word.push_back(w);
        return word;
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> w1 = getWord(sentence1);
        vector<string> w2 = getWord(sentence2);

        if(w1.size()<w2.size()) swap(w1,w2);
        int s=0, e=0;
        int n1 = w1.size(), n2 = w2.size();

        while(s<n2 && w1[s]==w2[s]) s++;
        while(e<n2 && w1[n1-e-1]==w2[n2-e-1]) e++;
        return s+e >= n2;
    }
};