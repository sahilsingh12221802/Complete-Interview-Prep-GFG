int longestConsecutive(vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    int ans = 0;
    for (int x : s) {
        if (s.find(x - 1) == s.end()) {
            int curr = x;
            int len = 1;
            while (s.find(curr + 1) != s.end()) {
                curr++;
                len++;
            }
            ans = max(ans, len);
        }
    }
    return ans;
}
