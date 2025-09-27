class Solution {
  public:
    bool isSortedRotated(vector<int>& arr) {
        int n = arr.size();
        int countInc = 0, countDec = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[(i + 1) % n]) countInc++;
            if (arr[i] < arr[(i + 1) % n]) countDec++;
        }
        if (countInc == 1) return true;
        if (countDec == 1) return true;
        return false;
    }
};
