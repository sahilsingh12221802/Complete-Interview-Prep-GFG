class Solution {
  public:
    void solve(vector<int> &arr, int i, string curr, vector<string> &res, vector<string> &map) {
        if (i == arr.size()) {
            res.push_back(curr);
            return;
        }
        for (char c : map[arr[i]]) {
            solve(arr, i + 1, curr + c, res, map);
        }
    }

    vector<string> possibleWords(vector<int> &arr) {
        vector<string> map = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> res;
        solve(arr, 0, "", res, map);
        return res;
    }
};
