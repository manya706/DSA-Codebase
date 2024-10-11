class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        int target = times[targetFriend][0];
        sort(times.begin(), times.end()); // sorting based on arrival time
        // creating 2 priority queues - 
        // 1-based on arrival time
        // 2-based on the unoccupied chairs
        priority_queue<int, vector<int>, greater<int>> p1;
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> p2;
        for(auto &i:times){
            while(!p2.empty() && p2.top().first<=i[0]){
                p1.push(p2.top().second);
                p2.pop();
            }
            if(i[0]==target) break;
            if(p1.empty()) p2.push({i[1], p2.size()});
            else {
                p2.push({i[1], p1.top()});
                p1.pop();
            }
        }
        return p1.empty()? p2.size() : p1.top();
    }
};