#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 10000, max_profit = 0;
       
        for (auto price : prices)
        {
            max_profit = max(max_profit, price - min_price);
            min_price  = min(min_price, price);
        }
        
        return max_profit;
    }
};