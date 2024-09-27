class MyCalendarTwo {
public:
    vector<pair<int,int>> booking;
    MyCalendarTwo() {}
    
    bool book(int x, int y) {
        for(auto& b: booking){
            int a = b.first, b2 = b.second;
            if(x<b2 && y>a){
                int newx = max(a,x);
                int newy = min(b2,y);
                if(doublebooking(newx,newy)){
                    return false;
                }
            }
            
        }
        booking.push_back({x,y});
        return true;
    }

    bool doublebooking(int x, int y){
        int over = 0;
        for(int i=0;i<booking.size();i++){
            int a = booking[i].first, b = booking[i].second;
            if(x<b and y>a) {
                over++;
                if(over==2) return true;
            }
        }
        return false;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */