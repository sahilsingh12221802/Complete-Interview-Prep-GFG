class Solution {
  public:
    bool isPanagram(string &s) {
        vector<bool> seen(26, false);
        for (char c : s) {
            if (isalpha(c)) seen[tolower(c) - 'a'] = true;
        }
        for (bool present : seen) {
            if (!present) return false;
        }
        return true;
    }
};
