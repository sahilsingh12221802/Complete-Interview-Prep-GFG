//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    
    // A[]: input array
    // N: input array size
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       int count_zeroes = 0;
       
       for (int i = 0; i < N; i++) {
           if (A[i] == 0) {
               count_zeroes++;
           }
       }
       
       for (int i = 0; i < count_zeroes; i++) {
           A[i] = 0;
       }
       
       for (int i = count_zeroes; i < N; i++) {
           A[i] = 1;
       }
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        obj.binSort(a);

        for (int i = 0; i < a.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << a[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends
