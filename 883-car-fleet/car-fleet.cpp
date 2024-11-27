class Solution {
public:
    static bool comp(pair<int,int> &a, pair<int,int> &b){
        return a.first>b.first;
    }
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        vector<pair<int,int>> car;
        for(int i=0;i<pos.size();i++){
            car.push_back({pos[i], speed[i]});
        }

        sort(car.begin(), car.end(), comp);
        stack<float> st;
        for(int i=0;i<car.size();i++){
            float t = (float) (target-car[i].first)/(float)car[i].second;
            if(!st.empty() && t>st.top()){
                st.push(t);
            } else if(st.empty()) {
                st.push(t);
            }
        }
        return st.size();
    }
};