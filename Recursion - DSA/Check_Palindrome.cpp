//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int reverseNumber(int N, int rev) {
        if (N == 0)
            return rev;
        return reverseNumber(N / 10, rev * 10 + N % 10);
    }
    bool isPalin(int N)
    {
        //Your code here
        //You may use a helper function if you like
        return N == reverseNumber(N, 0);
    }
};


//{ Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
