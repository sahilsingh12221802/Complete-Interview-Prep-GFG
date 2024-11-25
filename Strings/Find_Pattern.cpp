//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// function should find if the string p is
// in the string s. Return the starting index
// of the string p in s. Return -1 if the
// string doesnot exists in s.
int findPattern(string s, string p){
    // code here
    int pos = s.find(p);
    if(pos != string::npos){
        return pos;
    }else{
        return -1;
    }
    
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s, p;
        cin >> s >> p;

        int index = findPattern(s, p);
        cout << index << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
