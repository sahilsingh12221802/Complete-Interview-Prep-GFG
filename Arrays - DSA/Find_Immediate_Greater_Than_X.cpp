//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int immediateGreater(int arr[], int n, int x){
        int k = -1;
        for(int i = 0; i < n ; i++){
            if(arr[i] > x && (k == -1 || arr[i] < k)){
                k = arr[i];
            }
        }
        return k;
    }
};


//{ Driver Code Starts.



int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	int n;
    	cin >> n;
    	
    	int arr[n];
    	
    	for(int i = 0;i<n;i++){
    	    cin >> arr[i];
    	}
    	
    	int x;
    	cin >> x;
    	Solution obj;
    	cout << obj.immediateGreater(arr, n, x) << endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends
