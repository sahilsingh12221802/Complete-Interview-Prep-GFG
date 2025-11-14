class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = n*m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int val = mat[mid / m][mid % m];
            if (val == x) return true;
            else if (val < x) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
