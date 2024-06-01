class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<pair<string,string>,int> food;
        set<int> tables;
        set<string> foodName;
        
        for(vector<string> ord : orders){
            tables.insert(stoi(ord[1]));
            foodName.insert(ord[2]);
            pair<string,string> foodPair = {ord[2],ord[1]};
            food[foodPair]++;
        }
        vector<vector<string>> ans; 
        vector<string> header;
        header.push_back("Table");
        for(auto name:foodName){
            header.push_back(name);
        }
        ans.push_back(header);
        
        for(auto tno:tables){
            vector<string> v;
            v.push_back(to_string(tno));
            for(int i=1;i<ans[0].size();++i){
                string name = ans[0][i];
                v.push_back(to_string(food[{name,to_string(tno)}]));
            }
            ans.push_back(v);
        }
        return ans;
    }
};