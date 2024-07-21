//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  // backtracking function
    void findSum(vector<int> &ar, int sum, vector<vector<int>> &res, vector<int> &r, int i){
        if(sum==0){
            res.push_back(r);
            return;
        }
        while(ar.size()>i && sum-ar[i]>=0){
            r.push_back(ar[i]);
            findSum(ar,sum-ar[i], res,r,i);
            i++;
            r.pop_back();
        }
    }
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &ar, int B) {
        // Your code here
        sort(ar.begin(), ar.end());
        ar.erase(unique(ar.begin(), ar.end()), ar.end());
     
        vector<int> r;
        vector<vector<int> > res;
        findSum(ar, B, res, r, 0);
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends