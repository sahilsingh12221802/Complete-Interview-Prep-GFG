//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool isPanagram(string str){
        int n = str.length();
        if(n < 26){
            return 0;
        }
        //Your code here
        bool visited[26] = {0};
        for(int i = 0; i < n; i++){
            char x = str[i];
            if(x >= 'a' && x <= 'z'){
                visited[x - 'a'] = true;
            }
            if(x >= 'A' && x <= 'Z'){
                visited[x - 'A'] = true;
            }
        }
        for(int i = 0; i < 26; i++){
            if(visited[i] == false){
                return 0;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isPanagram(s) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
