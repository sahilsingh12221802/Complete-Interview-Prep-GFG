class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int total = 0, maxSum = arr[0], curMax = 0, minSum = arr[0], curMin = 0;
        for (int a : arr) {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            minSum = min(minSum, curMin);
            total += a;
        }
        if (maxSum < 0) return maxSum;
        return max(maxSum, total - minSum);
    }
};
