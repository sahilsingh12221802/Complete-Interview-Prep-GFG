class Solution {
  public:
    int maxEvenOdd(vector<int>& arr) {
        int n = arr.size();
        int res = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
                curr++;
                res = max(res, curr);
            } else {
                curr = 1;
            }
        }
        return res;
    }
};
