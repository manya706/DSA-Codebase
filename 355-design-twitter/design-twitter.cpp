class Twitter {
public:
    // stack for twitterfeed
    // unordered map for follower 
    stack<pair<int,int>> post;
    unordered_map<int, set<int>> mp;
    Twitter() {}
    
    void postTweet(int userId, int tweetId) {
        post.push({userId, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> t;
        stack<pair<int,int>> p = post;
        while(p.size() && t.size()!=10){
            pair<int,int> pair = p.top();
            p.pop();
            if(pair.first==userId || mp[userId].find(pair.first)!=mp[userId].end()){
                t.push_back(pair.second);
            }

        }
        return t;
    }
    
    void follow(int followerId, int followeeId) {
        mp[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        mp[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */