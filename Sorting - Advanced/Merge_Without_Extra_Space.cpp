class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();
        int i = n - 1, j = 0;
        while (i >= 0 && j < m && a[i] > b[j]) {
            swap(a[i], b[j]);
            i--;
            j++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
