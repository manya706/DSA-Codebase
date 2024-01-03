//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool checkanagram(string str1, string str2){
        map<char,int> mp;
        for(int i =0;i<str1.length();i++){
            mp[str1[i]]++;
        }
        for(int i=0;i<str2.length();i++){
            mp[str2[i]]--;
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
            if(it->second != 0) 
                return false;
            return true;
        
    }
	int search(string word, string text) {
	    // code here
	   // int n = txt.length();
	   // int m = pat.length();
	   // int ans=0;
	   // for(int i=0;i<n-m+1;i++){
	   //     if(checkanagram(txt.substr(i, m), pat)==true)
	   //         ans++;
	        
	   // }
	   // return ans;
	   int text_length = text.length();
        int word_length = word.length();
        if (text_length < 0 || word_length < 0
            || text_length < word_length)
            return 0;
 
        constexpr int CHARACTERS = 256;
        int count = 0;
        int index = 0;
        std::array<char, CHARACTERS> wordArr;
        wordArr.fill(0);
        std::array<char, CHARACTERS> textArr;
        textArr.fill(0);
 
        // till window size
        for (; index < word_length; index++) {
            wordArr[CHARACTERS - word[index]]++;
            textArr[CHARACTERS - text[index]]++;
        }
        if (wordArr == textArr)
            count += 1;
        // next window
        for (; index < text_length; index++) {
            textArr[CHARACTERS - text[index]]++;
            textArr[CHARACTERS
                    - text[index - word_length]]--;
 
            if (wordArr == textArr)
                count += 1;
        }
        return count;
	  
	}

};

// bool areAnagram(string s1, string s2)
// {
//     map<char, int> m;
//     for(int i = 0; i < s1.length(); i++)
//         m[s1[i]]++;
         
//     for(int i = 0; i < s2.length(); i++)
//         m[s2[i]]--;
         
//     for(auto it = m.begin(); it != m.end(); it++)
//         if(it -> second != 0)
//             return false;
             
//         return true;
// }
 
// int countAnagrams(string text, string word)
// {
     
//     // Initialize result
//     int res = 0;
//     for(int i = 0; 
//             i < text.length() - word.length() + 1; 
//             i++)
//     {
         
//         // Check if the word and substring are
//         // anagram of each other.
//         if (areAnagram(text.substr(i, word.length()),
//                                       word))
//             res++;
//     }
//     return res;
// }


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends