//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int GCD(int a,int b)
    {
        //Your code here
        if (b != 0)
            return GCD(b, a % b);
        else
            return a;
    }
};


//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int a,b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.GCD(a,b)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
