//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int countWords(string str){
        
        //Your code here
        int count = 0;
        bool isword = false;
        
        for(char ch : str){
            if(ch == ' '){
                isword = false;
            }else{
                if(!isword){
                    count++;
                    isword = true;
                }
            }
        }
        return count;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution obj;
        cout << obj.countWords(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
