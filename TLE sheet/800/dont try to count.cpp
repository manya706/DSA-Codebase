#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>s>>x;
        int count=0;
        int cnt=6;
        int f=0;
        while(cnt--){
            if(s.find(x)!=string::npos){
                f=1;
                break;
            } 
            count++;
            s+=s;
        }
        if(f==1) cout<<count<<endl;
        else cout<<-1<<endl;
    }
}