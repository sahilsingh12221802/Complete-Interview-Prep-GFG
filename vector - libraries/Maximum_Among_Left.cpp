//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

vector<int> maximum_from_left(vector<int>& arr) {
    // Your code here
    vector<int> res;
    int maxso = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > maxso){ 
            res.push_back(i);
            maxso = arr[i];
        }
    }
    return res;
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr;
        int i;
        for (i = 0; i < n; i++) {
            int k;
            cin >> k;
            arr.push_back(k);
        }
        vector<int> result = maximum_from_left(arr);
        for (auto i : result) {
            cout << i << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
