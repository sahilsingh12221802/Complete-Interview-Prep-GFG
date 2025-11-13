class Solution {
  public:
    void interchangeRows(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n/2; i++) {
            swap(matrix[i], matrix[n - i - 1]);
        }
    }
};
