//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Complete the below functions
int maximumElement(int arr[],int n)
{
    //Your code here
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int minimumElement(int arr[],int n)
{
    //Your code here
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}


//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<maximumElement(arr,n)<<" "<<minimumElement(arr,n)<<endl;
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
