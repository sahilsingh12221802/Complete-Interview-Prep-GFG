//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

void eraseAt(vector<int> &arr, int pos) {
    // your code here
    if(pos >= 0 && pos < arr.size()){
        arr.erase(arr.begin() + pos);
    }
}

void eraseInRange(vector<int> &arr, int start, int end) {
    
    // your code here
    if(start >= 0 && end <= arr.size() && start < end){
        arr.erase(arr.begin() + start, arr.begin() + end);
    }
}

    
void clearAll(vector<int> &arr) {
    // your code here
    arr.clear();
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int Erasetype;
        cin >> Erasetype;

        if (Erasetype == 1) {
            clearAll(arr);
        } else if (Erasetype == 2) {
            int pos;
            cin >> pos;
            eraseAt(arr, pos);

        } else {
            int start, end;
            cin >> start >> end;
            eraseInRange(arr, start, end);
        }
        if (arr.empty())
            cout << "Empty" << endl;
        else {
            for (auto itr = arr.begin(); itr != arr.end(); itr++)
                cout << *itr << " ";
            cout << endl;
        }
        cout << "~\n";
    }
}

// } Driver Code Ends
