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
