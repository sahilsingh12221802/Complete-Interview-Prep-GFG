class Solution {
  public:
    vector<int> maxAdj(vector<int> &arr) {
        vector<int> result;
        for(int i = 0; i < arr.size() - 1; i++) {
            result.push_back(max(arr[i], arr[i+1]));
        }
        return result;
    }
};
