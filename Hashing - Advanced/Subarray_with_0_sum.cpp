class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<long long> s;
        long long sum = 0;
        for(int x : arr){
            sum += x;
            if(sum == 0 || s.count(sum)) return true;
            s.insert(sum);
        }
        return false;
    }
};
