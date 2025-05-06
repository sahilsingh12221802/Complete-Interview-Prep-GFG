//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

/*
arr: insert the given array elements to vector
n: size of array
*/
vector<int> fillVector(int arr[], int n) {
    // your code here
    vector<int> v;
    for(int i = 0; i < n; i++) v.push_back(arr[i]);
    return v;
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin.ignore();
        vector<int> res = fillVector(arr, n);
        for (auto x : res)
            cout << x << " ";
        cout << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends
