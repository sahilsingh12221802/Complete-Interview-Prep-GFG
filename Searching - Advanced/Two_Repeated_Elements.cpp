class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        vector<bool> seen(n, false);
        for (int x : arr) {
            if (seen[x]) ans.push_back(x);
            else seen[x] = true;
            if (ans.size() == 2) break;
        }
        return ans;
    }
};
