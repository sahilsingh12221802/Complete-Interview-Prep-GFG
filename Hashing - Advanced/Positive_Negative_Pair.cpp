class Solution {
  public:
    vector<int> findPairs(int arr[], int n) {
        unordered_set<int> s;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int x = arr[i];
            if(s.count(-x)){
                if(x < 0){
                    ans.push_back(x);
                    ans.push_back(-x);
                } else {
                    ans.push_back(-x);
                    ans.push_back(x);
                }
            }
            s.insert(x);
        }
        return ans.empty() ? vector<int>() : ans;
    }
};
