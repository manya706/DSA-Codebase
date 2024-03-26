// If the count of 2s is even, it checks further.
// If there are no 2s (two == 0), it prints 1 since there is no splitting required.
// Otherwise, it calculates the median index of the 2s stored in the arr vector and
//  prints it as the result. The median index is calculated as arr.size() / 2 - 1.
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi arr;
        int two=0,one=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1) one++;
            else {
                two++;
                arr.pb(i+1);
            }
            
        }
        if(two&1) cout<<-1<<endl;
        else{
            if(two==0) cout<<1<<endl;
            else{
                int si = arr.size()/2;
                si--;
                cout<<arr[si]<<endl;
            }
        }
    }
}
