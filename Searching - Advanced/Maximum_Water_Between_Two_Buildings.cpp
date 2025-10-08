class Solution {
  public:
    int maxWater(vector<int> height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int ans = 0;
        while (l < r) {
            ans = max(ans, (r - l - 1) * min(height[l], height[r]));
            if (height[l] < height[r]) l++;
            else r--;
        }
        return ans;
    }
};
