class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int n = arr.size();
        int ans = 0, count = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i-1]) {
                count++;
                ans = max(ans, count);
            } else {
                count = 0;
            }
        }
        return ans;
    }
};
