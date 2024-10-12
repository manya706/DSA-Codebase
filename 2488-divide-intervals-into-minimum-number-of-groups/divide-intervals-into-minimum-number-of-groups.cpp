class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()); // sorting start time
        priority_queue<int, vector<int>, greater<int>> pq; // to store the end times
        for (const auto& i: intervals){
            int s = i[0], e = i[1];
            if(!pq.empty() && pq.top()<s) pq.pop();
            pq.push(e);
        }
        return pq.size();
    }
};