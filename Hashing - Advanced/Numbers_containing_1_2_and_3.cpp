class Solution {
public:
    vector<int> filterByDigits(vector<int>& arr) {
        vector<int> res;
        for (int x : arr) {
            int t = x;
            bool ok = true;
            while (t > 0) {
                int d = t % 10;
                if (d != 1 && d != 2 && d != 3) {
                    ok = false;
                    break;
                }
                t /= 10;
            }
            if (ok) res.push_back(x);
        }
        if (res.empty()) return {-1};
        return res;
    }
};
