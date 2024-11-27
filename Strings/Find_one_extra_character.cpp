//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{
    int n = s1.length();
    int res = 0;
    //code here
    for(int i = 0; i < n; i++){
        res = res ^ s1[i] ^ s2[i];
    }
    res = res ^ s2[n];
    return (char)res;
    
    
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        cout << extraChar(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
