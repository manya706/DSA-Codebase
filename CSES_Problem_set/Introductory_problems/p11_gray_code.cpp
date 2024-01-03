// A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
// Your task is to create a Gray code for a given length n.
// Input
// The only input line has an integer n.
// Output
// Print 2^n lines that describe the Gray code. You can print any valid solution.
// Example
// Input:
// 2

// Output:
// 00
// 01
// 11
// 10

//INTUITION-
// Initial Gray code: ["0", "1"]
// After the first iteration:
// Mirrored and appended: ["0", "1", "1", "0"]
// Prepend '0' and '1': ["00", "01", "11", "10"]
// The final Gray code for n = 2: ["00", "01", "11", "10"]

#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;
void gray_code(int n){ 
    vector<string> grayCode;
    grayCode.push_back("0");
    grayCode.push_back("1");

    // Iterate to generate Gray code for lengths greater than 1
    for (int i = 2; i < (1 << n); i = i << 1) {
        // Mirror and append bits to existing code
        for (int j = i - 1; j >= 0; j--) {
            grayCode.push_back(grayCode[j]);
        }

        // Prepend '0' to the first half and '1' to the second half
        for (int j = 0; j < i; j++) {
            grayCode[j] = "0" + grayCode[j];
            grayCode[j + i] = "1" + grayCode[j + i];
        }
    }
    for(int i=0;i<grayCode.size();i++){
        cout<<grayCode[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    gray_code(n);
}