//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height {
    int feet;
    int inches;
};

// int findMax(Height arr[], int n);

// } Driver Code Ends



/* Structure of the element of the array is as

struct Height {
    int feet;
    int inches;
};
*/

// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n) {
    int maxHeight = 0;
    for (int i = 0; i < n; i++) {
        int heightInInches = arr[i].feet * 12 + arr[i].inches;
        if (heightInInches > maxHeight) {
            maxHeight = heightInInches;
        }
    }
    return maxHeight;
}

//{ Driver Code Starts.
// driver program
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input

    Solution obj;

    while (t--) {
        vector<Height> arr;
        string line;

        // Read the whole line of input
        getline(cin, line);
        istringstream iss(line);
        int feet, inches;

        // Read pairs of integers from the line
        while (iss >> feet >> inches) {
            arr.push_back({feet, inches});
        }

        // Compute the result
        int res = obj.findMax(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends
