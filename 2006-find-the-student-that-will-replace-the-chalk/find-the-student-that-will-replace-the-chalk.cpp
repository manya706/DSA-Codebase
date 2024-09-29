class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long sum = 0;
        for( int i : chalk){
            sum+=i;
        }
        k = k % sum;
        for (int i=0;i<n;i++){
            if(chalk[i]>k) return i;
            else k -= chalk[i];
        }
        return -1;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();