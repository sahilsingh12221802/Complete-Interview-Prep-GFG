class Solution {
  public:
    void solve(string &s, int l, int r, vector<string> &res) {
        if (l == r) {
            res.push_back(s);
            return;
        }
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);
            solve(s, l + 1, r, res);
            swap(s[l], s[i]);
        }
    }
    vector<string> permute(string s) {
        vector<string> res;
        solve(s, 0, s.size() - 1, res);
        return res;
    }
};
