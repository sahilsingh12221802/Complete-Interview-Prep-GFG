class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int start = 0, sum = 0;
        for (int end = 0; end < n; end++) {
            sum += arr[end];
            while (sum > target && start <= end) {
                sum -= arr[start++];
            }
            if (sum == target) {
                return {start + 1, end + 1};
            }
        }
        return {-1};
    }
};

