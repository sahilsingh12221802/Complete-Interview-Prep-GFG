//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int integer_value;
        for (int i = 0; i < n; i++) {
            cin >> integer_value;
            arr[i] = integer_value;
        }

        
// } Driver Code Ends
//User function Template for C++

//complete its third parameter
sort(v.begin(), v.end(),[](int a, int b) { return a > b; }/*write down the lambda expression to 
                                sort vector in descending order*/);



//{ Driver Code Starts.

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }
}
// } Driver Code Ends
