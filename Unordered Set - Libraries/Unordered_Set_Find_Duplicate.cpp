vector<int> DuplicateMe(vector<int>& arr) {
    unordered_set<int> seen;
    unordered_set<int> duplicates;
    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            duplicates.insert(num);
        } else {
            seen.insert(num);
        }
    }
    vector<int> result;
    for (auto it = duplicates.begin(); it != duplicates.end(); ++it) {
        result.push_back(*it);
    }
    return result;
}
