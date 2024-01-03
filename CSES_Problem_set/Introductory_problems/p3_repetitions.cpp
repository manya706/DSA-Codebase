// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input
// The only input line contains a string of n characters.
// Output
// Print one integer: the length of the longest repetition.

// Example
// Input:
// ATTCGGGA

// Output:
// 3

#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    string str;
    cin>>str;
    ll max_till_now=1;
    ll max_ans=0;
    for(ll i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            max_till_now++;
            // cout<<max_till_now<<endl;
        }
        else{
            max_till_now=1;
        }
        if(max_till_now>max_ans){
            max_ans=max_till_now;
            // max_till_now=1;
        }
    }
    // cout<<max_till_now<<endl;
    cout<<max_ans;
}