int RankMe(string str) {
    string original = str;
    sort(str.begin(), str.end());
    int rank = 1;
    while (str != original) {
        next_permutation(str.begin(), str.end());
        rank++;
    }
    return rank;
}
