//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
vector<vector<int>> ans;
    bool searchInDirection(const vector<vector<char>>& grid, const string& word, int x, int y, int dx, int dy) {
    int n = grid.size();
    int m = grid[0].size();
    int len = word.size();
    
    for (int k = 0; k < len; ++k) {
        int nx = x + k * dx;
        int ny = y + k * dy;
        
        if (nx < 0 || nx >= n || ny < 0 || ny >= m || grid[nx][ny] != word[k]) {
            return false;
        }
    }
    
    return true;
}

// Function to find all occurrences of the word in the grid
vector<vector<int>> searchWord(vector<vector<char>>& grid, const string& word) {
    vector<vector<int>> results;
    int n = grid.size();
    int m = grid[0].size();
    set<pair<int, int>> seen;

    // 8 directions: right, left, down, up, down-right, down-left, up-right, up-left
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0},
                                         {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == word[0]) {
                for (const auto& dir : directions) {
                    int dx = dir.first;
                    int dy = dir.second;
                    
                    if (searchInDirection(grid, word, i, j, dx, dy)) {
                        // Record the starting position if it matches
                        if (seen.find({i, j}) == seen.end()) {
                            results.push_back({i, j});
                            seen.insert({i, j});
                        }
                        break; // Move to the next cell after finding one valid direction
                    }
                }
            }
        }
    }
    
    // Sort the results lexicographically
    sort(results.begin(), results.end());
    return results;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends