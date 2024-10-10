class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
       // using monotonic stack
       stack<int> st;
       int n = nums.size();
       for(int i=0;i<n;i++){
            if(st.empty() || nums[st.top()]>nums[i]){
                st.push(i);
            }
       }
        int ans=0;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[i]>=nums[st.top()]){
                ans = max(ans, i-st.top());
                st.pop();
            }
        }
        return ans;
    }
};