class Solution {
  public:
    vector<int> uniqueSorted(int arr[], int n) {
        set<int> s(arr, arr + n);
        return vector<int>(s.begin(), s.end());
    }
};
