//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void invTriangleWall(int s){
    for(int i = s; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout<<endl;
    }
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        invTriangleWall(s);
	}
}
// } Driver Code Ends
