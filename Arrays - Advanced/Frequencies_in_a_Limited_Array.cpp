class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, 0);
        for (int x : arr) {
            if (x >= 1 && x <= n) res[x - 1]++;
        }
        return res;
    }
};
