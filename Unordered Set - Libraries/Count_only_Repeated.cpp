class Solution {
  public:
    pair<long, long> findRepeating(long *arr, int n) {
        for (int i = 1; i < n; ++i) {
            if (arr[i] == arr[i - 1]) {
                long count = 2;
                while (i + 1 < n && arr[i + 1] == arr[i]) {
                    ++count;
                    ++i;
                }
                return {arr[i], count};
            }
        }
        return {-1, -1};
    }
};
