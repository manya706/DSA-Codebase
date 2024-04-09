#include <iostream>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int ones, twos, threes, fours;
        cin >> ones >> twos >> threes >> fours;
        
        int ans = 0;
        int ansWithExtraOnes = 0;
        
        // Calculate the number of pairs that can be formed using even counts of each number
        ans += (ones / 2);
        ans += (twos / 2);
        ans += (threes / 2);
        ans += (fours / 2);
        
        // Check if there are at least one each of ones, twos, and threes
        if (ones && twos && threes) {
            // Calculate the number of pairs considering an extra one from each set of numbers
            ansWithExtraOnes += ((ones + 1) / 2);
            ansWithExtraOnes += ((twos + 1) / 2);
            ansWithExtraOnes += ((threes + 1) / 2);
            ansWithExtraOnes -= 2; // Subtracting 2 because we counted one extra from each set
            ansWithExtraOnes += (fours / 2);
        }
        
        // Choose the maximum number of pairs
        ans = max(ans, ansWithExtraOnes);
        
        cout << ans << endl;
    }
    
    return 0;
}
