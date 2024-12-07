//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        int m = A.size();
        int n = A[0].size();
        int p = B[0].size();
        
        if (A[0].size() != B.size()) {
            return {};
        }
        
        vector<vector<int>> res(m, vector<int>(p, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < p; j++){
                for(int k = 0; k < n; k++){
                    res[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return res;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int mat1[4][4]; // Define a 2D array for matrix A
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> mat1[i][j];
            }
        }

        int mat2[4][4]; // Define a 2D array for matrix B
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> mat2[i][j];
            }
        }

        Solution ob;
        int result[4][4]; // Define a 2D array for the result matrix
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> result[i][j];
            }
        }
        bool isValid = ob.multiplyMatrix(mat1, mat2, result);

        if (!isValid) {
            cout << "False\n";
        } else {
            cout << "True\n";
        }
    }
    return 0;
}

// } Driver Code Ends
