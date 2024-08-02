//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string s) {
        // code here
        vector<string> segments;
        string segment;
        stringstream ss(s);
        
        while (getline(ss, segment, '.')) {
            segments.push_back(segment);
        }
    
        // There should be exactly 4 segments
        if (segments.size() != 4) {
            return false;
        }
    
        // Check each segment
        for (const string &seg : segments) {
            // Segment length should be between 1 and 3
            if (seg.length() < 1 || seg.length() > 3) {
                return false;
            }
    
            // Each character in the segment should be a digit
            for (char ch : seg) {
                if (!isdigit(ch)) {
                    return false;
                }
            }
    
            // Convert segment to integer
            int num = stoi(seg);
    
            // Check if the number is within the range [0, 255]
            if (num < 0 || num > 255) {
                return false;
            }
    
            // Check if there are leading zeros
            if (seg[0] == '0' && seg.length() > 1) {
                return false;
            }
        }
    
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends