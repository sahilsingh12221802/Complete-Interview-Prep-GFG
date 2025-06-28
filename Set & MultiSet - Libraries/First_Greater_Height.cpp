vector<int> greater_height(vector<int> v) {
    int n = v.size();
    vector<int> res(n, -1);
    set<int> s;
    for (int i = n - 1; i >= 0; --i) {
        auto it = s.upper_bound(v[i]);
        if (it != s.end()) res[i] = *it;
        s.insert(v[i]);
    }
    return res;
}
