//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      // 1 2 3 4 5 6 9
      if(N==1) return 1;
      sort(arr,arr+N);
      int count=1;
      int max_c=-1;
      for(int i =0;i<N-1;i++){
          if(arr[i+1]-arr[i]==1) count++;
          else if(arr[i+1]-arr[i] == 0) continue;
          else{
              
              count=1;
          }
          max_c = max(max_c,count);
      }
      return max_c;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends