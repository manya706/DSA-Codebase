#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
int main(){
    int t;
    cin>>t;
    int grid[10][10]={
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 2, 2, 2, 2, 2, 2 ,2, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
		{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
		{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
		{1, 2, 2, 2, 2, 2, 2 ,2, 2, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    while(t--){
        string s;
        int points=0;
        for(int i=0;i<10;i++){
            cin>>s;
            for(int j=0;j<10;j++){
                if(s[j]=='X'){
                    points+=grid[i][j];
                }
            }
        }
        cout<<points<<endl;
    }
}