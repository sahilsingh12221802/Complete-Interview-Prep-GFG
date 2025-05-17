//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete this function
vector<pair<int, int>> sortBySecond(vector<pair<int, int>> v) {
    // Your code here
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
        if(a.second != b.second)
            return a.second > b.second;
        return a.first > b.first;
    });
    return v;
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            int a;
            int h;
            cin >> a >> h;

            v.push_back({a, h});
        }

        // cin.ignore();
        vector<pair<int, int>> temp = sortBySecond(v);

        for (int i = 0; i < n; i++) {
            cout << "(" << temp[i].first << "," << temp[i].second << ") ";
        }

        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
