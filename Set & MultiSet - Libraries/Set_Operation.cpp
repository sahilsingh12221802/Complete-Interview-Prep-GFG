set<int> setInsert(int arr[], int n) {
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    return s;
}

void setDisplay(set<int> s) {
    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;
}

void setErase(set<int>& s, int x) {
    if (s.find(x) != s.end()) {
        s.erase(x);
        cout << "erased " << x << endl;
    } else {
        cout << "not found" << endl;
    }
}
