class Solution {
public:
    bool isValid(string word) {
        if (word.size()<3) return false;

        bool vowel = false;
        bool cons = false;
        for(auto i: word){
            if(isalpha(i)){
                i = tolower(i);
                if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
                    vowel = true;
                }
                else{ 
                    cons = true;
                }
            }
           else if(!isdigit(i)){
            return false;
           }
        }
        return vowel&&cons;
    }
};