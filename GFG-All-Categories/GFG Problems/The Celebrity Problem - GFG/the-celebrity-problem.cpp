//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool knows(int a, int b, vector<vector<int> >& M){
        if(M[a][b]==1) return true;
        return false;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        //step 1:
        for(int i=0;i<n;i++){
            s.push(i); // adding all the element to the stack
        }
        // step 2:
        while(s.size() != 1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(knows(a,b,M)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        // step 3:
        bool rowc=false;
        int candidate = s.top();
        int zeroc=0;
        for(int i=0;i<n;i++){
            if(M[candidate][i]==0) zeroc++;
        }
        if(zeroc==n) rowc=true;
        
        bool colc = false;
        int check1 = 0;
        
        for(int i=0;i<n;i++){
            if(M[i][candidate]==1) check1++;
        }
        if(check1==n-1) colc=true;
        
        if(colc&&rowc) return candidate;
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends