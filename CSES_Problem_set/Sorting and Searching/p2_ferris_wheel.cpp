// There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.
// Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.
// What is the minimum number of gondolas needed for the children?
// Input
// The first input line contains two integers n and x: the number of children and the maximum allowed weight.
// The next line contains n integers p_1,p_2,\ldots,p_n: the weight of each child.
// Output
// Print one integer: the minimum number of gondolas.


// Example
// Input:
// 4 10
// 7 2 3 9

// Output:
// 3
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    int n,x;
    cin>>n>>x;
    vector<ll> weights;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        weights.push_back(t);
    }
    sort(weights.begin(),weights.end());
    int left = 0, right = n - 1;
    int count = 0;

    while (left <= right) {
        if (weights[left] + weights[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }
        count++;
    }
    cout<<count;
}

