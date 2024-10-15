//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

void square(int s) {
    // code here
    for(int i = 1; i <= s; i++){
        if(i == 1){
            for(int j = 1; j <= s; j++){
                cout << "* ";
            }
            cout << endl;
        }
        else if(i != s){
            for(int j = 1;j <= s ;j++){
                if(j == 1 || j == s){
                    cout <<"* ";
                }else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
        else{
            for(int j = 1; j <= s; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
}



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        square(n);
    }
    return 0;
}
// } Driver Code Ends
