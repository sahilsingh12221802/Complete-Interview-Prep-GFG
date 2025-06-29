multiset<int> multisetInsert(int arr[], int n) {
    multiset<int> s;
    for (int i = 0; i < n; ++i) {
        s.insert(arr[i]);
    }
    return s;
}

void multisetDisplay(multiset<int> s) {
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;
}

void multisetErase(multiset<int>& s, int x) {
    auto it = s.find(x);
    if (it != s.end()) {
        s.erase(it);
        cout << "erased " << x << endl;
    } else {
        cout << "not found" << endl;
    }
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;
}
