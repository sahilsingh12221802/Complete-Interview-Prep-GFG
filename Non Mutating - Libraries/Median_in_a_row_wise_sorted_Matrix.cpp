class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int r = mat.size(), c = mat[0].size();
        int low = 1, high = 2000;
        while (low <= high) {
            int mid = (low + high) / 2;
            int count = 0;
            for (int i = 0; i < r; i++) {
                count += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
            }
            if (count <= (r * c) / 2)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
