class Solution {
  public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {
        const int MAXV = 1000000;
        vector<int> freq(MAXV + 1, 0);
        for (int x : a1) freq[x]++;
        
        vector<bool> used(MAXV + 1, false);
        int idx = 0;
        
        for (int x : a2) {
            if (!used[x]) {
                used[x] = true;
                while (freq[x]--) {
                    a1[idx++] = x;
                }
            }
        }
        
        for (int i = 1; i <= MAXV; i++) {
            while (freq[i]--) {
                a1[idx++] = i;
            }
        }
    }
};
