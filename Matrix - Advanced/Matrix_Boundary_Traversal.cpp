class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        vector<int> res;
        int n = mat.size();
        int m = mat[0].size();
        if (n == 1) {
            for (int j = 0; j < m; j++) res.push_back(mat[0][j]);
            return res;
        }
        if (m == 1) {
            for (int i = 0; i < n; i++) res.push_back(mat[i][0]);
            return res;
        }
        for (int j = 0; j < m; j++) res.push_back(mat[0][j]);
        for (int i = 1; i < n; i++) res.push_back(mat[i][m - 1]);
        for (int j = m - 2; j >= 0; j--) res.push_back(mat[n - 1][j]);
        for (int i = n - 2; i > 0; i--) res.push_back(mat[i][0]);
        return res;
    }
};
