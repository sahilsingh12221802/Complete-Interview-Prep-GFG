//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void utility(int d, int n){
    
    //write your code here
    int x = (d - n) % 7;
    if(x < 0){
        cout << x + 7;
    }else{
        cout << x;
    }
   
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t-- > 0) {
        int d, n;
        cin>>d>>n;
        utility(d, n);
        cout<<endl;
    }
	
}
// } Driver Code Ends
