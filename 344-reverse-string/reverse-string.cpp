class Solution {
public:
    void reverseString(vector<char>& s) {
        // will try using two pointers 
        int l=0, r=s.size()-1;
        while(l<=r){
            // char temp = s[l];
            // s[l] = s[r];
            // s[r] = temp;
            swap(s[l], s[r]);
            l++;
            r--;
            
        }
    }
};