class Solution {
  public:
    int subArraySum(vector<int>& arr, int tar) {
        unordered_map<int,int> mp;
        int prefix = 0, count = 0;
        mp[0] = 1;
        for(int x : arr){
            prefix += x;
            if(mp.find(prefix - tar) != mp.end())
                count += mp[prefix - tar];
            mp[prefix]++;
        }
        return count;
    }
};
