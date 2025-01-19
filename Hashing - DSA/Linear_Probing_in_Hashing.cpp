//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to fill the array elements into a hash table
    // using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray) {
        // Your code here
        vector<int> hashtable(hashSize, -1);
        
        for(int i = 0; i < sizeOfArray; i++){
            int key = arr[i];
            int hashIndex = key % hashSize;
            if(hashtable[hashIndex] == -1){
                hashtable[hashIndex] = key;
            }else{
                int j = hashIndex;
                while(hashtable[j] != -1 && hashtable [j] != key){
                    j = (j + 1) % hashSize;
                    if(j == hashIndex){
                        break;
                    }
                }
                if(hashtable[j] == -1){
                    hashtable[j] = key;
                }
            }
        }
        return hashtable;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int hashSize;
        cin >> hashSize;

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        vector<int> hash;
        Solution obj;
        hash = obj.linearProbing(hashSize, arr, sizeOfArray);

        for (int i = 0; i < hashSize; i++)
            cout << hash[i] << " ";

        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
