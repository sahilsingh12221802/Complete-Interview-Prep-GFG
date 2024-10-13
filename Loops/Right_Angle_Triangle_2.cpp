//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void triangle(int s){
        
    //Write your code here
    for(int i = 1; i<=s; i++){
        if(i == s){
            for(int j = 1; j <= s; j++){
                cout <<"* ";
            }
        }else{
            cout << "*";
            for(int j = 1; j < i; j++){
                cout << " ";
            }
            if(i > 1){
                cout << " *";
            }
        }
        cout << endl;
    }
        
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
	    triangle(s);
	}
}
// } Driver Code Ends
