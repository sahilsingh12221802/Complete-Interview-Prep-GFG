int sumExists(int arr[], int N, int sum) {
    unordered_set<int> s;
    for(int i = 0; i < N; i++) {
        int target = sum - arr[i];
        if(s.find(target) != s.end()) return 1;
        s.insert(arr[i]);
    }
    return 0;
}
