// You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.
// Your task is to efficiently find out if you can empty both the piles.
// Input
// The first input line has an integer t: the number of tests.
// After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.
// Output
// For each test, print "YES" if you can empty the piles and "NO" otherwise.
// Constraints

// 1 \le t \le 10^5
// 0 \le a, b \le 10^9

// Example
// Input:
// 3
// 2 1
// 2 2
// 3 3

// Output:
// YES
// NO
// YES
// consider the initial number of coins in the left pile (a) and the 
// right pile (b). If the sum of the coins in both piles (a + b) is not
//  divisible by 3, it means that there is no way to perform moves such 
//  that the total number of coins removed is a multiple of 3. 
//  Therefore, it's impossible to empty both piles.

#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        cout<<((x+y)%3==0 && min(x,y) * 2 >= max(x,y) ? "YES" :"NO")<<endl;
    }
}