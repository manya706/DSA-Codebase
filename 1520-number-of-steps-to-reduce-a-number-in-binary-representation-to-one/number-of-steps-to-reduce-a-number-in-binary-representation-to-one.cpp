class Solution {
public:
// int binaryToDecimal(string n)
// {
//     string num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int len = num.length();
//     for (int i = len - 1; i >= 0; i--) {
//         if (num[i] == '1')
//             dec_value += base;
//         base = base * 2;
//     }
 
//     return dec_value;
// }
    int numSteps(string s) {
        // int  = stoi(s);
        int n = s.length();
        int ans=n-1, carry=0;
        for(int i=n-1;i>0;i--){
            if(s[i]-'0' + carry ==1){
                ans++;
                carry=1;
            }
        }
        return ans+carry;
    }
};