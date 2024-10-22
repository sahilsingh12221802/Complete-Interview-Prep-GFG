//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int LCM(int a, int b){

    //write your code here
    //return LCM of a and b
    int start = max(a,b);
    int end = a*b;
    for(int i = start; i <= end; i++){
        if(i%a == 0 && i%b == 0){
            return i;
        }
    }
    
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int a, b; cin>>a>>b;
        cout<<LCM(a, b)<<endl;
	}
}
// } Driver Code Ends
