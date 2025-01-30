//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long min_diff = LLONG_MAX;
        for (long long i = 0; i + m - 1 < n; i++) {
            long long diff = a[i + m - 1] - a[i];
            min_diff = min(min_diff, diff);
        }
        return min_diff;
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

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
