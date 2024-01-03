#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int> ans;
    ans.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
        ans.push_back(n);
        if(n==1) break;
    }
    for(long long int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}