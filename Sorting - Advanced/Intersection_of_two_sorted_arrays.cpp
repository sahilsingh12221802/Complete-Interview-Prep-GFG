class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector<int> result;
        int i = 0, j = 0;
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] == arr2[j]) {
                if (result.empty() || result.back() != arr1[i])
                    result.push_back(arr1[i]);
                i++;
                j++;
            } else if (arr1[i] < arr2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return result;
    }
};
