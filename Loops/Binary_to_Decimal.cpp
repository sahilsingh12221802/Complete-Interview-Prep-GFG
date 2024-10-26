//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int binary_to_decimal(int B)
		{
			//code here
			int val = 0;
			int base = 1;
			while(B > 0){
			    int l_d = B % 10;
			    val = val + (l_d * base);
			    B /= 10;
			    base *= 2;
			}
			return val;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int B;
    	cin >> B;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(B);
    	cout << ans <<"\n";
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
