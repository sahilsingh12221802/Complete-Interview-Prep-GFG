class Solution {
  public:
    int countNonRepeated(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x : arr) mp[x]++;
        int c = 0;
        for(auto &p : mp) if(p.second == 1) c++;
        return c;
    }
};
