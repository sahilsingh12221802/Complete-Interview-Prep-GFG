//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++

/*
array_of_Pairs(arr, n, res, m): function has arr[]: contains elements of given array
n: sze of array
res: stores the pair of integers
m: size of res.
*/
void arrayOfPairs(int arr[], int n, pair<int, int> res[], int m) {
    // code here
    int i=0;
    int j=n-1;
    while(i<=j){
        pair <int,int> p;
        p.first=arr[i];
        p.second=arr[j];
        res[i]=p;
        
        i++;
        j--;
    }
    
}





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;

        // Input size of array
        cin >> N;

        int arr[N];
        // Input array elements
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int req_size;
        if (N % 2 == 0)
            req_size = N / 2;
        else {
            req_size = N / 2 + 1;
        }
        pair<int, int> res[req_size];

        // Call the function to populate `res`
        arrayOfPairs(arr, N, res, req_size);

        // Print the result
        for (int i = 0; i < req_size; i++) {
            cout << "(" << res[i].first << "," << res[i].second << ") ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends
