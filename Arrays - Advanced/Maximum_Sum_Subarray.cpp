class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxSum = arr[0], currSum = arr[0];
        for(int i = 1; i < arr.size(); i++) {
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
