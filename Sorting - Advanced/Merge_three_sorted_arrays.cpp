class Solution {
  public:
    vector<int> mergeThree(vector<int>& a, vector<int>& b, vector<int>& c) {
        vector<int> res;
        int i = 0, j = 0, k = 0;
        while (i < a.size() || j < b.size() || k < c.size()) {
            int x = INT_MAX, y = INT_MAX, z = INT_MAX;
            if (i < a.size()) x = a[i];
            if (j < b.size()) y = b[j];
            if (k < c.size()) z = c[k];
            int mn = min({x, y, z});
            res.push_back(mn);
            if (i < a.size() && a[i] == mn) i++;
            else if (j < b.size() && b[j] == mn) j++;
            else if (k < c.size() && c[k] == mn) k++;
        }
        return res;
    }
};
