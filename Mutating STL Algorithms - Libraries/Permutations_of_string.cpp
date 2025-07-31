void printPermutation(string str) {
    sort(str.begin(), str.end());
    do {
        cout << str << " ";
    } while (next_permutation(str.begin(), str.end()));
    cout << endl;
}
