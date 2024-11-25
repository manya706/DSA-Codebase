//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        
        // sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n==1 && arr[0]==1){
            return 2;
        }
        if(n==1 && arr[0]>1){
            return arr[0]-1;
        }
        long long sum = ((n+1)*(n+2))/2;
        // cout<<sum<<endl;
        long long s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        // cout<<s<<endl;
        return (int)(sum-s);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends