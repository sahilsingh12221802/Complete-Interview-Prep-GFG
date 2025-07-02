class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;
        vector<int> result;
        for(int num : a) freq[num]++;
        for(int num : b){
            if(freq[num] > 0){
                result.push_back(num);
                freq[num]--;
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
