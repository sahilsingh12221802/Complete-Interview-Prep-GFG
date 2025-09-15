class Solution {
  public:
    int maxOccured(vector<int>& L, const vector<int>& R) {
        int n = L.size();
        int m = *max_element(R.begin(), R.end());
        vector<int> freq(m + 2, 0);
        for (int i = 0; i < n; i++) {
            freq[L[i]]++;
            freq[R[i] + 1]--;
        }
        int ans = 0, maxFreq = freq[0];
        for (int i = 1; i <= m; i++) {
            freq[i] += freq[i - 1];
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                ans = i;
            }
        }
        return ans;
    }
};
