//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// function should print the alphabets
// from c1 to c2 (space separated)
// No need to print the new line
// The new line will be printed by the
// driver's code.

void alphabets(char c1, char c2){
    // code here
    for(char c = c1; c <= c2; c++){
        cout << c <<" ";
    }
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    char c1, c2; cin>>c1>>c2;
            
        alphabets(c1, c2);
        cout<<endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends
