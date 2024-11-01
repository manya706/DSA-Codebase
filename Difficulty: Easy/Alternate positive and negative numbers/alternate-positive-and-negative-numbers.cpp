//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos, neg;
        for(int i: arr){
            if(i<0){
                neg.push_back(i);
            }
            else pos.push_back(i);
        }
        int i = 0, j = 0, k = 0;
        bool toggle = true; // Start with positive numbers if possible
    
        // Alternate between positive and negative numbers
        while (j < pos.size() && k < neg.size()) {
            if (toggle) {
                arr[i++] = pos[j++];
            } else {
                arr[i++] = neg[k++];
            }
            toggle = !toggle;
        }
    
        // Append remaining positive numbers, if any
        while (j < pos.size()) {
            arr[i++] = pos[j++];
        }
    
        // Append remaining negative numbers, if any
        while (k < neg.size()) {
            arr[i++] = neg[k++];
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends