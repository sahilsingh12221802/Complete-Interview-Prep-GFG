bool sExists(std::set<int> s, int x) {
    return find(s.begin(), s.end(), x) != s.end();
}
