class Solution {
  public:
    int MinimumDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        for(int i = 1; i < arr.size(); i++) {
            minDiff = min(minDiff, arr[i] - arr[i - 1]);
        }
        return minDiff;
    }
};
