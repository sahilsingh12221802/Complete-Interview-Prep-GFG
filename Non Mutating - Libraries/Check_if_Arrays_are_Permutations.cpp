bool isArr2PermutationOfArr1(vector<int>& arr1, vector<int>& arr2) {
    return is_permutation(arr1.begin(), arr1.end(), arr2.begin());
}
