char extraChar(string &s1, string &s2) {
    int res = 0;
    for (char c : s1) res ^= c;
    for (char c : s2) res ^= c;
    return res;
}
