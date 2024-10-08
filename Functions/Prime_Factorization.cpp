//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// This function should print the prime factorization
// of the number n
// The new line is given by the driver's code.
void printPrimeFactorization(int n){
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << " ";
    }
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
            
        printPrimeFactorization(n);
            
        cout<<endl;
	}
}
// } Driver Code Ends
