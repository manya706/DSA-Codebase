// There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.
// Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.
// Input
// The first input line contains integers n and m: the number of tickets and the number of customers.
// The next line contains n integers h_1,h_2,\ldots,h_n: the price of each ticket.
// The last line contains m integers t_1,t_2,\ldots,t_m: the maximum price for each customer in the order they arrive.
// Output
// Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.
// If a customer cannot get any ticket, print -1.
// Constraints

// Example
// Input:
// 5 3
// 5 3 7 8 5
// 4 8 3

// Output:
// 3
// 8
// -1
#include<bits/stdc++.h>
using namespace std;
int n, m, h, t;
multiset<int> tickets;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> h;
		tickets.insert(h);
	}
	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

// int main(){
//     int t, c;
//     cin>>t>>c;
//     multiset<int> ticket_price;
//     int customer;
//     for(int i=0;i<t;++i){
//         int x;
//         cin>>x;
//         ticket_price.insert(x);
//     }
    
//     for(int i=0;i<c;++i){
//         cin>>customer; 
//         // lowerbound
//         auto ans = upper_bound(ticket_price.begin(),ticket_price.end(),customer);
//         if(ans == ticket_price.begin()){
//             cout<<-1<<endl;
//             // *ans = -1;
//         }
//         else {
// 			cout << *(--ans) << "\n";
//             ticket_price.erase(ans);
// 		}
        
//     }
// }
// 3 5 5 7 8 
