//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int fibonacci(int n){
        
    //Write your code here to calculate
    //to calculate the nth fibonacci number
    if( n <= 1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = fibonacci(n);
        cout<<ans<<endl;
	}
}
// } Driver Code Ends
