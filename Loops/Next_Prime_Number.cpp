//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int nextPrime(int n){
      
    n++;
    while(true){
        int i;
        for(i = 2; i<= n; i++){
            if(n%i == 0){
                break;
            }
        }
        if(i == n)return n;
        n++;
    }
    //code here to find next prime number
    //return next prime number
   
    
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = nextPrime(n);
        cout<<ans<<endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends
