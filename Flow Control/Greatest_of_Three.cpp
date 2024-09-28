//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int find_greatest_number(int a, int b, int c){
    // Write your code here..
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }
    else{
        return c;
    }
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
        int greatest_number = find_greatest_number(a,b,c);
        cout<<greatest_number<<endl;
	}
	
}
// } Driver Code Ends
