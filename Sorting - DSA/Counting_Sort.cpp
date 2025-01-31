//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int count[RANGE+1] = {0};
        string result = arr;
        
        for(char ch : arr){
            count[ch]++;
        }
        for(int i = 1; i <= RANGE; i++){
            count[i] += count[i-1];
        }
        for(int i = arr.size(); i >= 0; i--){
            result[count[arr[i]] - 1] = arr[i];
            count[arr[i]]--;
        }
        return result;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends
