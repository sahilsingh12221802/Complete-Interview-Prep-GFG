//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

vector<pair<int, pair<int, int>>> increasing_List(vector<pair<int, pair<int, int>>> v) {
    sort(v.begin(), v.end(), [](const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
        if (a.first != b.first)
            return a.first < b.first;
        if (a.second.first != b.second.first)
            return a.second.first < b.second.first;
        return a.second.second < b.second.second;
    });
    return v;
}



//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n;
	    cin>>n;
	    vector<pair<int,pair<int,int>>>v;
	    
	    for(int i=0;i<n;i++)
	    {
	        int k;
	        cin>>k;
	        v.push_back({k,{0,0}});
	    }
	    for(int i=0;i<n;i++)
	    {
	        int k;
	        cin>>k;
	        v[i].second.first=k;
	    }
	    for(int i=0;i<n;i++)
	    {
	        int k;
	        cin>>k;
	        v[i].second.second=k;
	    }
	    vector<pair<int,pair<int,int>>>result;
	    
	    result=increasing_List(v);
	    
	    for(auto i:result)
	    {
	        cout<<i.first<<" ";
	    }
	    cout<<endl;
	    for(auto i:result)
	    {
	        cout<<i.second.first<<" ";
	    }
	    cout<<endl;
	    for(auto i:result)
	    {
	        cout<<i.second.second<<" ";
	    }
	    cout<<endl;
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
