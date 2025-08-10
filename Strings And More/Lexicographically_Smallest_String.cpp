string lexi_string(string s) {
    string res = s;
    int n = s.size();
    for (int i = 1; i < n; ++i) {
        string rotated = s.substr(i) + s.substr(0, i);
        if (rotated < res) {
            res = rotated;
        }
    }
    return res;
}
