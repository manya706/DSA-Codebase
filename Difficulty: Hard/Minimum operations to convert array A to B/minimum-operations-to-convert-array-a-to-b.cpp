//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        unordered_set<int> s;
        for(int i=0;i<M;i++){
            s.insert(B[i]);
        }
        vector<int> lis;
        for(int i=0;i<N;i++){
            if(s.find(A[i])!=s.end()){
                if(lis.empty() || lis.back()<A[i]){
                    lis.push_back(A[i]);
                }
                else {
                    int p = lis.size()-1;
                    while(p>=0 && lis[p]>=A[i]){
                        p--;
                    }
                    lis[p+1] = A[i];
                }
            }
        }
        return N+M-2*lis.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends