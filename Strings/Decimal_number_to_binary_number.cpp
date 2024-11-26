//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void toBinary(string N)
{
    int num = stoi(N);
    // your code here
    string s = "";
    while(num > 0){
        int t = num % 2;
        s = s + to_string(t);
        num /= 2;
    }
    reverse(s.begin(),s.end());
    cout << s;
        
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << toBinary(n);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
