//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

bool prime(int n){
    if(n == 0||n == 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
    
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        bool ans = prime(n);
        if(ans)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends
