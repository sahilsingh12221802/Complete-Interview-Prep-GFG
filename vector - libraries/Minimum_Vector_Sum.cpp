//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minimum_vertical_sum(vector<vector<int>>& arr, int n) {
        // code here
        int maxcol = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i].size() > maxcol) 
                maxcol = arr[i].size();
        }
        vector<int> sum(maxcol , 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < arr[i].size(); j++){
                sum[j] += arr[i][j];
            }
        }
        int mn = sum[0];
        for(int i = 1; i < maxcol; i++){
            if(sum[i] < mn)
                mn = sum[i];
        }
        return mn;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);
            vector<int> arr2;
            int num;
            while (ss >> num) {
                arr2.push_back(num);
            }
            arr.push_back(arr2);
        }
        Solution ob;
        cout << ob.minimum_vertical_sum(arr, n) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends
