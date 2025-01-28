//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        
        int left[n1], right[n2];
        
        for (int i = 0; i < n1; i++)
            left[i] = arr[l + i];
        for (int i = 0; i < n2; i++)
            right[i] = arr[m + 1 + i];
        
        int i = 0, j = 0, k = l;
        
        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }
        
        while (i < n1)
            arr[k++] = left[i++];
        
        while (j < n2)
            arr[k++] = right[j++];
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2;
            
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            
            merge(arr, l, m, r);
        }
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
