int upBound(vector<int> V, int k) {
    auto it = upper_bound(V.begin(), V.end(), k);
    if (it == V.end()) return -1;
    return *it;
}

int lowBound(vector<int> V, int k) {
    auto it = lower_bound(V.begin(), V.end(), k);
    if (it == V.end()) return -1;
    return *it;
}
