class MyCalendar {
public:
    vector<pair<int,int>> bookings;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for(auto const& pair: bookings){
            int s = pair.first;
            int e = pair.second;
            if(start < e && end > s){
                return false;
            }
        }
        bookings.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */