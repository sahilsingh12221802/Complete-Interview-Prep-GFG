class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        int n = mat.size();
        int upper = 0, lower = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(j >= i) upper += mat[i][j];
                if(j <= i) lower += mat[i][j];
            }
        }
        return {upper, lower};
    }
};
