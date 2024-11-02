#include <cctype>
class Solution {
public:
    bool isCircularSentence(string sentence) {
        // for single word in sentence
        int n = sentence.size();
        if(sentence[0]!=sentence[n-1]) return false;
        bool flag = true;
        for(int i=1;i<n-1;i++){
            if(sentence[i]==' '){
                if(sentence[i-1]==sentence[i+1]){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        
        return flag;
    }
};