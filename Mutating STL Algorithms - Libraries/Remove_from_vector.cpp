void removeWithinRange(vector<int> &V, int start, int end) {
    V.erase(V.begin() + start, V.begin() + end);
}
