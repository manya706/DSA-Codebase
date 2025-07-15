class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.size()<k){
            int s = word.size();
            for(int i=0;i<s;i++){
                if(word[i]!='z'){
                    word += word[i]+1;
                }
                else {
                    word += 'a';
                }
            }
        }
        return word[k-1];
    }
};