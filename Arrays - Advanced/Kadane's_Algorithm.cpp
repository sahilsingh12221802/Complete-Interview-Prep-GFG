// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int maxSum = INT_MIN, currentSum = 0;
        for (int i = 0; i < arr.size(); i++) {
            currentSum += arr[i];
            maxSum = max(maxSum, currentSum);
            if (currentSum < 0) currentSum = 0;
        }
        return maxSum;
    }

};
