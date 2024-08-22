//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        queue<pair<string,int>> q;
        unordered_set<string> s(wordList.begin(), wordList.end());
        q.push({startWord,1});
        s.erase(startWord);
        while(!q.empty()){
            string w = q.front().first;
            int l = q.front().second;
            q.pop();
            if(w==targetWord) return l;
            for(int i=0;i<w.length();i++){
                char p = w[i];
                for(char k = 'a';k<='z';k++){
                    w[i] = k;
                    if(s.find(w)!=s.end()){
                        s.erase(w);
                        q.push({w,l+1});
                    }
                }
                w[i] = p;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends