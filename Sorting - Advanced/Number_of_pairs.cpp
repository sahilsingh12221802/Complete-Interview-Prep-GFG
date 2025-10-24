class Solution {
  public:
    int countPairs(vector<int> &arr, vector<int> &brr) {
        sort(brr.begin(), brr.end());
        vector<int> freq(5, 0);
        for (int y : brr)
            if (y < 5) freq[y]++;
        int ans = 0;
        for (int x : arr) {
            if (x == 1) continue;
            int idx = upper_bound(brr.begin(), brr.end(), x) - brr.begin();
            ans += (brr.size() - idx);
            ans += freq[1];
            if (x == 2) ans -= (freq[3] + freq[4]);
            if (x == 3) ans += freq[2];
        }
        return ans;
    }
};
