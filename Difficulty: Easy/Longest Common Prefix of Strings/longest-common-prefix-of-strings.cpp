//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size();
        if(n==1) return arr[0];
        string res = "";
        bool include;
        for(int i=0;i<arr[0].length();i++){
            include = true;
            for(int j=1;j<n;j++){
                if(i>=arr[j].length() || arr[0][i] != arr[j][i]){
                    include = false;
                    break;
                }
            }
            if(!include) break;
            res+=arr[0][i];
        }
        if(res=="") return "-1";
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends