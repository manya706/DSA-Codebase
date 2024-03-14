// You are given the arrival and leaving times of n customers in a restaurant.
// What was the maximum number of customers in the restaurant at any time?
// Input
// The first input line has an integer n: the number of customers.
// After this, there are n lines that describe the customers. Each line has two integers a and b: the arrival and leaving times of a customer.
// You may assume that all arrival and leaving times are distinct.
// Output
// Print one integer: the maximum number of customers.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le a < b \le 10^9

// Example
// Input:
// 3
// 5 8
// 2 4
// 3 9

// Output:
// 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> c;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        c.push_back({x,1});
        c.push_back({y,-1});
    }
    sort(c.begin(),c.end());
    long long int current=0, max_custormer=0;
    for(pair<int,int> &it : c){
        current += it.second;
        max_custormer = max(max_custormer,current);
    }
    cout<<max_custormer;
}