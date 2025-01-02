//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
      
      bool ascending = true;
    bool descending = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            ascending = false;
        }
        if (arr[i] < arr[i + 1]) {
            descending = false;
        }
    }

    return ascending || descending;
       
    }
};


//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
