class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> afterextra;
        for(int i=0;i<candies.size();i++){
            afterextra.push_back(candies[i]+extraCandies);
        }
        vector<bool> ans;
        int m = *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            
            if(m<=afterextra[i]){
                ans.push_back(true);
            }
            else ans.push_back(false);
        }
        return ans;
    }
};