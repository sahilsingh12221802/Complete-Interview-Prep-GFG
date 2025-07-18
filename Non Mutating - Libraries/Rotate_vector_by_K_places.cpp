vector<int> leftRotate(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n;
    rotate(arr.begin(), arr.begin() + k, arr.end());
    return arr;
}
