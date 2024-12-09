//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

template <class T>
T largest(T arr[], int n) {
    
    //code here
    T largestVal = 0;
    for(int i = 1; i < n;i++){
        if(largestVal < arr[i]){
            largestVal = arr[i];
        }
    }
    return largestVal;
}


//{ Driver Code Starts.

int main() {
    
    
    int t; cin>>t;
    while (t--) {
        int n, q, i;
	    cin>>n>>q;
	
	int intArr[n];
    float floatArr[n];
    
        switch(q)
	{
	    case 1:
	    for(i=0; i<n; i++)
	    {
	        cin>>intArr[i];
	    }
	    cout << largest(intArr, n) << endl;
    	break;
        
        case 2:
	    for(i=0; i<n; i++)
	    {
	        cin>>floatArr[i];
	    }
	    cout << largest(floatArr, n) << endl;
    	break;
	}
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends
