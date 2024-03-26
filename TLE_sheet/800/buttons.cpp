#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2){
            if(a+1>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}