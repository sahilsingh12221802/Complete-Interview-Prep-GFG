class Solution {
  public:
    vector<vector<int>> sumMatrix(const vector<vector<int>>& A,
                                  const vector<vector<int>>& B) {
        int n1 = A.size(), m1 = A[0].size();
        int n2 = B.size(), m2 = B[0].size();
        if (n1 != n2 || m1 != m2) return {};
        vector<vector<int>> res(n1, vector<int>(m1));
        for (int i = 0; i < n1; i++)
            for (int j = 0; j < m1; j++)
                res[i][j] = A[i][j] + B[i][j];
        return res;
    }
};
