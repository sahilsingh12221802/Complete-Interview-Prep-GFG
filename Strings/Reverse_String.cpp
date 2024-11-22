//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string s){
    // code here
    string str;
    for(int i = s.length()-1; i >= 0; i--){
        str += s[i];
    }
    return str;
    
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        string reversed = reverseString(s);
        cout << reversed << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
