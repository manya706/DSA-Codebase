#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int num) {
        int x=num;
        long rev=0,digit;
        if(x<0){
            return false;
        }
        while(x!=0){
            digit=x%10;
            rev=(rev*10)+digit;
            x=x/10;
        }
        if(num==rev){
            return true;
        }
        else{
            return false;
        }
        }
    
};