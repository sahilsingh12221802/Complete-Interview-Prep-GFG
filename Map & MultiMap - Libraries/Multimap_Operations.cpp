multimap<int, int> multimapInsert(vector<int>& arr) {
    multimap<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        mp.insert({arr[i], i});
    }
    return mp;
}

void multimapDisplay(multimap<int, int> mp) {
    for (auto& it : mp) {
        cout << it.first << " " << it.second << endl;
    }
}

void multimapErase(multimap<int, int>& mp, int x) {
    if (mp.find(x) != mp.end()) {
        mp.erase(x);
        cout << "erased " << x << endl;
    } else {
        cout << "not found" << endl;
    }
}

