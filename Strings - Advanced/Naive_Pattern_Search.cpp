class Solution {
  public:
    bool search(string pat, string txt) {
        int n = txt.size();
        int m = pat.size();
        if (m > n) return false;
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && txt[i + j] == pat[j]) {
                j++;
            }
            if (j == m) return true;
        }
        return false;
    }
};
