//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
   void QuadraticProbing(vector<int>& hash, int hashSize, int arr[], int N) {
        for (int i = 0; i < N; ++i) {
            int value = arr[i];
            int hashIndex = value % hashSize;
            int j = 0;

            while (hash[hashIndex] != -1 && hash[hashIndex] != value) {
                j++;
                hashIndex = (value % hashSize + j * j) % hashSize;
            }

            hash[hashIndex] = value;
        }
    }


};



//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize,-1);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	
cout << "~" << "\n";
}
	return 0;
}



// } Driver Code Ends
