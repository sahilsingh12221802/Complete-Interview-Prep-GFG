class Solution {
  public:
    int maxAND(vector<int>& arr) {
        int res = 0;
        for (int bit = 16; bit >= 0; bit--) {
            int candidate = res | (1 << bit);
            int count = 0;
            for (int num : arr) {
                if ((num & candidate) == candidate) count++;
                if (count >= 2) break;
            }
            if (count >= 2) res = candidate;
        }
        return res;
    }
};
