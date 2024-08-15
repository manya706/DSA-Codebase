//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    void merge(int left, int mid, int right, vector<pair<int, int>>& arr, vector<int>& count){
        vector<pair<int, int>> temp(right - left + 1);
        int i = left;
        int j = mid + 1;
        int k = 0;
        
        while(i <= mid && j <= right)
        {
            if(arr[i].first <= arr[j].first)
            {
                temp[k++] = arr[j++]; 
            }
            else
            {
                count[arr[i].second] += (right - j + 1);
                
                temp[k++] = arr[i++];
            }
        }
         while(i <= mid)
        {
            temp[k++] = arr[i++];
        }
        
        while(j <= right)
        {
            temp[k++] = arr[j++];
        }
        
        for(int l = left; l <= right; l++)
        arr[l] = temp[l - left];
    }
    void mergeSort(int left, int right, vector<pair<int, int>>& arr, vector<int>& count)
    {
        if(left >= right)
        {
            return;
        }

        int mid = left + (right - left) / 2;
        
        mergeSort(left, mid, arr, count);
        mergeSort(mid + 1, right, arr, count);
        
        merge(left, mid, right, arr, count);
    }
    vector<int> constructLowerArray(vector<int> &nums) {
        // code here
        int n=nums.size();
	    vector<pair<int, int>> arr;
        
	    for(int i = 0; i < n; i++)
	    {
	        arr.push_back({nums[i], i});
	    }
	    
	    vector<int> count(n, 0);
	    
	    mergeSort(0, n - 1, arr, count);
	    
	    return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends