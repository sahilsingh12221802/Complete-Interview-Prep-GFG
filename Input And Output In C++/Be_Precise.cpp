//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void precise(float a, float b)
{
    //code here
    cout << a/b << " "<< fixed << setprecision(3) << a/b;
    
   
}

//{ Driver Code Starts.
void precise(float , float );


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b; 
	    precise(a,b);
	    cout<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
