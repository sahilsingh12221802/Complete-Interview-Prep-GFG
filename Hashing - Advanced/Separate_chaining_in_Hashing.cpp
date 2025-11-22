class Solution {
  public:
    vector<vector<int>> separateChaining(int hashSize, vector<int>& arr) {
        vector<vector<int>> table(hashSize);
        for(int x : arr){
            int idx = x % hashSize;
            table[idx].push_back(x);
        }
        return table;
    }
};
