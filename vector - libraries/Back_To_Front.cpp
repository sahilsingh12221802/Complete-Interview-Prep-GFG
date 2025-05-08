//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

/*Function to print vector in reverse order
 * using iterator
 * it1 : arr.rbegin(), reverse iterator
 * it2 : arr.rend(), reverse iterator
 */
void reverseIterator(vector<int>::reverse_iterator it1,
                     vector<int>::reverse_iterator it2) {

    // Your code here
    while(it1 != it2) {
        cout << *it1 << " ";
        ++it1;
    }

    cout << endl;
}



//{ Driver Code Starts.

// Driver code
int main() {

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int N;
        cin >> N;

        // Declaring vector
        vector<int> arr;

        // Taking input to vector
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            arr.push_back(k);
        }

        // Calling function
        reverseIterator(arr.rbegin(), arr.rend());
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends
