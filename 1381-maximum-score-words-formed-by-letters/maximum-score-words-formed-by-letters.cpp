class Solution {
public:
void backtrack(vector<string>& words, vector<int>& score, vector<int>& c, vector<int>& lett, int pos, int temp, int &ans){
    for(int i = 0; i < 26; i++){
            if(lett[i] > c[i]) return;
        }
        ans = max(ans, temp);
        for(int i = pos; i < words.size(); i++){
            for(auto& j : words[i]){
                lett[j - 'a']++;
                temp+=score[j - 'a'];
            }
            backtrack(words, score, c, lett, i + 1, temp, ans);
            for(auto& j : words[i]){
                lett[j - 'a']--;
                temp-=score[j - 'a'];
            }
        }
}
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> c(26,0);
        vector<int> lett(26,0);
        for(auto &i: letters){
            c[i-'a']++;
        }
        int ans=0;
        backtrack(words,score,c,lett,0,0,ans);
        return ans;
    }
};